#include <iostream>
#include <chrono>
int main() {
    auto specific_date = std::chrono::year_month_day{std::chrono::year{2025}, std::chrono::month{7}, std::chrono::day{11}};
    std::cout << "Specific Date: " << specific_date << std::endl;

    auto now = std::chrono::system_clock::now();
    std::cout << "Current Time Point: " << now << std::endl;

    return 0;
}
