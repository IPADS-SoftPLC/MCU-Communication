#include <stdio.h>
#include <string.h>

#include "serialSender.hpp"

int main ()
{
    serialSender ss("/dev/ttyUSB0",9600);
    if (ss.connect() < 0) return -1;
    ss.send("Pump");
}

