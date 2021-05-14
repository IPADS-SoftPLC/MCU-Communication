#include <iostream>

#include <wiringSerial.h>

#include "serialSender.hpp"

int serialSender::connect() {
    if ((this->fd = serialOpen(dev.c_str(), baud)) < 0) {
        cerr<<"Unable to open serial device: "<< errno << endl;
        return -1;
    }
    return 0;
}

void serialSender::send(string str) {
    serialPrintf(this->fd, str.c_str());
}
