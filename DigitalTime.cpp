#include <iostream>
#include <ctime>
#include <windows.h> // For Sleep and system("CLS") on Windows

int main() {
    while (true) {
        system("CLS"); // Clear the console (Windows)
        time_t rawtime;
        struct tm *info;
        time(&rawtime);
        info = localtime(&rawtime);

        // Print formatted time
        std::cout << (info->tm_hour < 10 ? "0" : "") << info->tm_hour << ":"
                  << (info->tm_min < 10 ? "0" : "") << info->tm_min << ":"
                  << (info->tm_sec < 10 ? "0" : "") << info->tm_sec << std::endl;

        Sleep(1000); // Pause for 1 second (Windows)
    }
    return 0;
}