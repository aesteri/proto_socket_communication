#include <iostream>
#include <cstring>      // For memset
#include <arpa/inet.h>  // For sockaddr_in and inet_addr
#include <sys/socket.h> // For socket functions
#include <unistd.h>     // For close
#include <google/protobuf/message.h>
#include "include/christine.pb.h" // Update include path

const int BUFFER_SIZE = 1024;

int main() {
    // Initialize Google's Protocol Buffers library
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // Create the socket
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        std::cerr << "Failed to create socket" << std::endl;
        return 1;
    }

    // Specify the server address
    sockaddr_in serverAddr;
    memset(&serverAddr, 0, sizeof(serverAddr)); // Zero out the structure

    serverAddr.sin_family = AF_INET;               // Set the address family to IPv4
    serverAddr.sin_port = htons(8080);             // Server port
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server IP address (localhost)

    // Create and populate the ClientMessage protobuf
    christine::yap_of_christine clientMessage;
    clientMessage.set_sender_name("Client");
    clientMessage.set_yap("Hello from client!");

    // Serialize the message to a string
    std::string serializedMessage;
    clientMessage.SerializeToString(&serializedMessage);

    // Send the message to the server
    if (sendto(sock, serializedMessage.data(), serializedMessage.size(), 0, 
               (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Failed to send message" << std::endl;
        close(sock);
        return 1;
    }

    // Buffer to receive the response
    char buffer[BUFFER_SIZE];
    sockaddr_in fromAddr;
    socklen_t fromAddrLen = sizeof(fromAddr);

    // Wait for the response from the server
    ssize_t receivedBytes = recvfrom(sock, buffer, BUFFER_SIZE - 1, 0, 
                                     (struct sockaddr*)&fromAddr, &fromAddrLen);
    if (receivedBytes < 0) {
        std::cerr << "Failed to receive message" << std::endl;
        close(sock);
        return 1;
    }

    // Deserialize the received message
    christine::yap_of_christine serverResponse;
    if (!serverResponse.ParseFromArray(buffer, receivedBytes)) {
        std::cerr << "Failed to parse received message" << std::endl;
        close(sock);
        return 1;
    }

    // Print the received message
    std::cout << "Received message from server: " << serverResponse.yap() << std::endl;

    // Clean up and close the socket
    google::protobuf::ShutdownProtobufLibrary();
    close(sock);
    return 0;
}
