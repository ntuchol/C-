#include <chrono>
#include <iostream>

class TwentyFourHourClock {
private:
    std::chrono::hours hours_;
    std::chrono::minutes minutes_;
    std::chrono::seconds seconds_;

public:
    TwentyFourHourClock(int h, int m, int s)
        : hours_(h), minutes_(m), seconds_(s) {
        if (hours_ >= std::chrono::hours(24) || hours_ < std::chrono::hours(0) ||
            minutes_ >= std::chrono::minutes(60) || minutes_ < std::chrono::minutes(0) ||
            seconds_ >= std::chrono::seconds(60) || seconds_ < std::chrono::seconds(0)) {
            hours_ = std::chrono::hours(0);
            minutes_ = std::chrono::minutes(0);
            seconds_ = std::chrono::seconds(0);
            std::cerr << "Invalid time provided. Setting to 00:00:00." << std::endl;
        }
    }

    int getHours() const { return hours_.count(); }
    int getMinutes() const { return minutes_.count(); }
    int getSeconds() const { return seconds_.count(); }

    void displayTime() const {
        std::cout << (getHours() < 10 ? "0" : "") << getHours() << ":"
                  << (getMinutes() < 10 ? "0" : "") << getMinutes() << ":"
                  << (getSeconds() < 10 ? "0" : "") << getSeconds() << std::endl;
    }
};

int main() {
    TwentyFourHourClock time1(14, 30, 5); 
    time1.displayTime();

    TwentyFourHourClock time2(0, 5, 59); 
    time2.displayTime();

    TwentyFourHourClock time3(25, 0, 0); 
    time3.displayTime();

    return 0;
}
