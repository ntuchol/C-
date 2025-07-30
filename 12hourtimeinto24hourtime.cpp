#include <iostream>
#include <string>
#include <iomanip> // For std::setw and std::setfill

void convert12To24Hour(const std::string& time12hr) {
    int hours, minutes, seconds;
    char colon1, colon2;
    std::string ampm;

    // Parse the input string
    std::stringstream ss(time12hr);
    ss >> hours >> colon1 >> minutes >> colon2 >> seconds >> ampm;

    // Adjust hours based on AM/PM
    if (ampm == "PM" && hours != 12) {
        hours += 12;
    } else if (ampm == "AM" && hours == 12) {
        hours = 0; // 12 AM (midnight) becomes 00
    }

    // Print in 24-hour format
    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds << std::endl;
}

int main() {
    convert12To24Hour("05:30:00 PM"); // Output: 17:30:00
    convert12To24Hour("06:45:50 AM"); // Output: 06:45:50
    convert12To24Hour("12:32:30 AM"); // Output: 00:32:30
    convert12To24Hour("12:15:18 PM"); // Output: 12:15:18
    convert12To24Hour("01:02:22 PM"); // Output: 13:02:22
    return 0;
}