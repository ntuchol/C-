#include <ctime>
#include <iostream>
#include <iomanip> // For std::put_time in C++11+

int main() {
    char buffer[80];
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime); // Get local time

    // Format for "YYYY-MM-DD HH:MM:SS"
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
    std::cout << "Formatted time (strftime): " << buffer << std::endl;

    return 0;
}