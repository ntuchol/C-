#include <iostream> 
#include <iomanip>  

int main() {
    for (int hour = 0; hour < 24; ++hour) {
        for (int minute = 0; minute < 60; ++minute) {
            std::cout << std::setw(2) << std::setfill('0') << hour << ":";
            std::cout << std::setw(2) << std::setfill('0') << minute << std::endl;
        }
    }
    return 0; 
}
