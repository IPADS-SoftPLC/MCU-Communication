#ifndef SERIAL_SENDER_HPP
#define SERIAL_SENDER_HPP

#include <string>

using namespace std;

class serialSender {

public:
    serialSender(string devPath, int baud): dev(devPath), baud(baud) {}
    int connect();
    void send(string str);

private:
    int fd;
    string dev;
    int baud;
};

#endif
