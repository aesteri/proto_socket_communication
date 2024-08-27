#include "../include/client_driver.h" // Update include path
#include "../include/server_driver.h"
#include <iostream>

int main() {
    Server server("0.0.0.0", 8080);

    while (true) {
        christine::Client receivedMessage;

        // Receive message from client
        if (server.ReceiveMessage(receivedMessage)) {
            std::cout << "Received message: " << receivedMessage.sender_name() << ": " 
                      << receivedMessage.message() << std::endl;

            // Prepare and send a response
            hytech::Server responseMessage;
            responseMessage.set_sender_name("ServerName");
            responseMessage.set_message("Hello from the server!");

            if (server.SendMessage(responseMessage)) {
                std::cout << "Response sent successfully" << std::endl;
            } else {
                std::cerr << "Failed to send response" << std::endl;
            }
        } else {
            std::cerr << "Failed to receive message" << std::endl;
        }
    }

    return 0;
}