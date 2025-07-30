#include <iostream>
#include <chrono>

int main() {
    // Get the current time point from system_clock
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // Convert the time point to time_t for display
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    // Print the current time
    std::cout << "Current time: " << std::ctime(&now_c) << std::endl;

    return 0;
}