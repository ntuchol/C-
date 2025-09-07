#include <iostream>
#include <string>
#include <iomanip> 
void convert12To24Hour(const std::string& time12hr) {
    int hours, minutes, seconds;
    char colon1, colon2;
    std::string ampm;

    std::stringstream ss(time12hr);
    ss >> hours >> colon1 >> minutes >> colon2 >> seconds >> ampm;

    if (ampm == "PM" && hours != 12) {
        hours += 12;
    } else if (ampm == "AM" && hours == 12) {
        hours = 0; 
    }

    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds << std::endl;
}

int main() {
    convert12To24Hour("05:30:00 PM"); 
    convert12To24Hour("06:45:50 AM"); 
    convert12To24Hour("12:32:30 AM"); 
    convert12To24Hour("12:15:18 PM"); 
    convert12To24Hour("01:02:22 PM"); 
    return 0;
}
