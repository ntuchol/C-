#include <iostream>
    #include <chrono>

    int main() {
        auto now = std::chrono::system_clock::now();

        std::chrono::minutes five_minutes(5);

        auto future_time = now + five_minutes;

        std::chrono::seconds ten_seconds(10);
        std::chrono::minutes one_minute(1);
        auto total_duration = ten_seconds + one_minute; 

        std::time_t future_time_t = std::chrono::system_clock::to_time_t(future_time);
        std::cout << "Current time: " << std::ctime(&future_time_t); 
        return 0;
    }
