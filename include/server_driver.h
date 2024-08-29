#ifndef SERVER_H
#define SERVER_H

#include <string>
#include <arpa/inet.h>  // For sockaddr_in
#include <sys/socket.h> // For socket functions
#include <unistd.h>     // For close
#include "../proto/christine/christine.pb.h"
#include "../proto/hytech/hytech.pb.h"

class Server {
public:
    Server(const std::string& server_ip, uint16_t server_port);
    ~Server();

    bool SendMessage(const hytech::Server& message);
    bool ReceiveMessage(christine::Client& message);

private:
    int sock;
    sockaddr_in server_addr;
    static const int BUFFER_SIZE = 1024;
};

#endif // SERVER_H
