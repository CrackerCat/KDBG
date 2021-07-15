#ifndef _GLOBAL_H
#define _GLOBAL_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <windows.h>

#ifdef __cplusplus
}
#endif

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#define _STR(VAL) #VAL
#define STR(VAL) _STR(VAL)

#define LOG_INFO(MSG, ...) printf("[+] " MSG, __VA_ARGS__)
#define LOG_ERROR(MSG, ...) printf("[-] " MSG, __VA_ARGS__)

#define LOG_ENTER_FUNCTION(CLASS, FUNCTION) printf("[>] " STR(CLASS) "::" STR(FUNCTION) "\n")
#define LOG_EXIT_FUNCTION(CLASS, FUNCTION) printf("[<] " STR(CLASS) "::" STR(FUNCTION) "\n")

#endif