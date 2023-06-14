#ifndef MKS_LOG_H
#define MKS_LOG_H

#include <iostream>
#include <stdio.h>

#define LOG_RED             "\033[31;1m"
#define LOG_YELLOW          "\033[0;33m"
#define LOG_GREEN           "\033[0;32m"
#define LOG_BLUE            "\033[0;34m"
#define LOG_PURPLE          "\033[0;35m"
#define LOG_SKYBLUE         "\033[0;36m"
#define LOG_END             "\033[0m"

#define MKSLOG(fmt, ...) printf(("[%s][%s] %s: %d\n" fmt "\n"), __DATE__, __TIME__, __FILE__, __LINE__, ##__VA_ARGS__)

#define MKSLOG_RED(fmt, ...) printf(("%s[%s][%s] %s: %d\n" fmt "\n%s"), LOG_RED, __DATE__, __TIME__, __FILE__, __LINE__, ##__VA_ARGS__, LOG_END)
#define MKSLOG_YELLOW(fmt, ...) printf(("%s[%s][%s] %s: %d\n" fmt "\n%s"), LOG_YELLOW, __DATE__, __TIME__, __FILE__, __LINE__, ##__VA_ARGS__, LOG_END)
#define MKSLOG_BLUE(fmt, ...) printf(("%s[%s][%s] %s: %d\n" fmt "\n%s"), LOG_BLUE, __DATE__, __TIME__, __FILE__, __LINE__, ##__VA_ARGS__, LOG_END)

#endif
