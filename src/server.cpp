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

    // Specify the address and port to bind to
    sockaddr_in myAddr;
    memset(&myAddr, 0, sizeof(myAddr)); // Zero out the structure

    myAddr.sin_family = AF_INET;                // Set the address family to IPv4
    myAddr.sin_addr.s_addr = htonl(INADDR_ANY); // Bind to any available interface
    myAddr.sin_port = htons(8080);              // Bind to port 8080

    // Bind the socket to the address and port
    if (bind(sock, (struct sockaddr *)&myAddr, sizeof(myAddr)) < 0) {
        std::cerr << "Bind failed" << std::endl;
        close(sock);
        return 1;
    }

    std::cout << "Socket successfully bound to port 8080" << std::endl;

    // Buffer to receive the message
    char buffer[BUFFER_SIZE];
    sockaddr_in fromAddr;
    socklen_t fromAddrLen = sizeof(fromAddr);

    // Wait for a message from the client
    ssize_t receivedBytes = recvfrom(sock, buffer, BUFFER_SIZE - 1, 0, 
                                     (struct sockaddr*)&fromAddr, &fromAddrLen);
    if (receivedBytes < 0) {
        std::cerr << "Failed to receive message" << std::endl;
        close(sock);
        return 1;
    }

    // Deserialize the received message
    christine::yap_of_christine receivedMessage;
    if (!receivedMessage.ParseFromArray(buffer, receivedBytes)) {
        std::cerr << "Failed to parse received message" << std::endl;
        close(sock);
        return 1;
    }

    // Print the contents of the received message
    std::cout << "Received message from: " << receivedMessage.sender_name() << std::endl;
    if (receivedMessage.has_yap()) {
        std::cout << "Yap content: " << receivedMessage.yap() << std::endl;
    }

    // Create a response message
    christine::yap_of_christine responseMessage;
    responseMessage.set_sender_name("Server");
    responseMessage.set_yap("Hello from the server!");

    // Serialize the response message
    std::string serializedResponse;
    responseMessage.SerializeToString(&serializedResponse);

    // Send the response back to the client
    if (sendto(sock, serializedResponse.data(), serializedResponse.size(), 0, 
               (struct sockaddr*)&fromAddr, fromAddrLen) < 0) {
        std::cerr << "Failed to send response" << std::endl;
        close(sock);
        return 1;
    }

    std::cout << "Response sent to client" << std::endl;

    // Clean up and close the socket
    google::protobuf::ShutdownProtobufLibrary();
    close(sock);
    return 0;
}
