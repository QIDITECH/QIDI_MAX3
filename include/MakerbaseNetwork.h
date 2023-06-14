#ifndef MAKERBASE_NETWORK_H
#define MAKERBASE_NETWORK_H

#include <iostream>
#include "./MakerbaseShell.h"

#include <stdio.h>
#include <stdlib.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>

std::string get_wlan0_ip();

std::string get_eth0_ip();

int getIPAddress();

#endif
