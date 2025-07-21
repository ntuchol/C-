#include <iostream> // Required for input/output operations
#include <iomanip>  // Required for std::setw and std::setfill

int main() {
    // Loop through each hour from 0 to 23
    for (int hour = 0; hour < 24; ++hour) {
        // Loop through each minute from 0 to 59
        for (int minute = 0; minute < 60; ++minute) {
            // Print the hour, ensuring two digits with leading zero if necessary
            std::cout << std::setw(2) << std::setfill('0') << hour << ":";
            // Print the minute, ensuring two digits with leading zero if necessary
            std::cout << std::setw(2) << std::setfill('0') << minute << std::endl;
        }
    }
    return 0; // Indicate successful execution
}
