#include "../include/MakerbaseNetwork.h"

std::string mks_eth0_ip = "";
std::string mks_page_internet_ip = "127.0.0.1";
std::string get_wlan0_ip() {
    char result[MAX_FILE_LEN] = {0};
    std::string cmd = "ifconfig wlan0 | awk 'NR==2{print $2}' | tr -d '\n\r'";
    execute_cmd(cmd.data(), result);
    printf("%s", result);
    return result;
}

std::string get_eth0_ip() {
    char result[MAX_FILE_LEN] = {0};
    std::string cmd = "ifconfig eth0 | awk 'NR==2{print $2}' | tr -d '\n\r'";
    execute_cmd(cmd.data(), result);
    printf("%s", result);
    return result;
}

int getIPAddress() {
    struct ifaddrs * ifAddrStruct = NULL;
    struct ifaddrs * ifa = NULL;
    void * tmpAddrPtr = NULL;

    getifaddrs(&ifAddrStruct);

    printf("IP addresses: \n");

    for (ifa = ifAddrStruct; ifa != NULL; ifa = ifa->ifa_next) {
        if (!ifa->ifa_addr) {
            continue;
        }

        if (ifa->ifa_addr->sa_family == AF_INET) {
            // is a valid IP4 Address
            tmpAddrPtr = &((struct sockaddr_in *)ifa->ifa_addr)->sin_addr;
            char addressBuffer[INET_ADDRSTRLEN];
            inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
            if (strcmp(ifa->ifa_name, "eth0") == 0) {
                mks_eth0_ip = addressBuffer;
            
            }
        
        }
    }
    
    if (ifAddrStruct != NULL) freeifaddrs(ifAddrStruct);
    
    return 0;
}