#include <iostream>
#include <chrono>

int main() {
    // Creating a date instance using year_month_day (C++20)
    auto specific_date = std::chrono::year_month_day{std::chrono::year{2025}, std::chrono::month{7}, std::chrono::day{11}};
    std::cout << "Specific Date: " << specific_date << std::endl;

    // Getting the current date (system_clock::now() returns a time_point)
    auto now = std::chrono::system_clock::now();
    // Converting time_point to a date instance (requires C++20 calendar types or conversion logic)
    // For simplicity, directly printing the time_point here:
    std::cout << "Current Time Point: " << now << std::endl;

    return 0;
}