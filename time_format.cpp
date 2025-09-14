#include <ctime>
#include <iostream>
#include <iomanip> 

int main() {
    char buffer[80];
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime); 
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);
    std::cout << "Formatted time (strftime): " << buffer << std::endl;

    return 0;
}
