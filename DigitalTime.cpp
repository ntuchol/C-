#include <iostream>
#include <ctime>
#include <windows.h> 
int main() {
    while (true) {
        system("CLS"); 
        time_t rawtime;
        struct tm *info;
        time(&rawtime);
        info = localtime(&rawtime);

        std::cout << (info->tm_hour < 10 ? "0" : "") << info->tm_hour << ":"
                  << (info->tm_min < 10 ? "0" : "") << info->tm_min << ":"
                  << (info->tm_sec < 10 ? "0" : "") << info->tm_sec << std::endl;

        Sleep(1000); 
    }
    return 0;
}
