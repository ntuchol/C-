#include <iostream>
    #include <chrono>

    int main() {
        // Get the current time point
        auto now = std::chrono::system_clock::now();

        // Define a duration of 5 minutes
        std::chrono::minutes five_minutes(5);

        // Add the duration to the current time point
        auto future_time = now + five_minutes;

        // You can also add durations to each other
        std::chrono::seconds ten_seconds(10);
        std::chrono::minutes one_minute(1);
        auto total_duration = ten_seconds + one_minute; 

        // To print time_points, you often need to convert them
        // For example, to a time_t and then use ctime functions for formatting.
        std::time_t future_time_t = std::chrono::system_clock::to_time_t(future_time);
        std::cout << "Current time: " << std::ctime(&future_time_t); // This will print the future time
        return 0;
    }