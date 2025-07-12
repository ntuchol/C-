#include <iostream>
#include <iomanip> // For std::setw and std::setfill

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor: Initializes the clock to 12:00:00 AM
    Clock() : hours(0), minutes(0), seconds(0) {}

    // Constructor with hours, minutes, and seconds
    // Handles invalid input by setting to 00:00:00
    Clock(int h, int m, int s) {
        setHours(h);
        setMinutes(m);
        setSeconds(s);
    }

    // Setters
    void setHours(int h) {
        if (h >= 0 && h < 24) { // Valid hours are 0-23
            hours = h;
        } else {
            hours = 0; // Default to 0 if invalid
        }
    }

    void setMinutes(int m) {
        if (m >= 0 && m < 60) { // Valid minutes are 0-59
            minutes = m;
        } else {
            minutes = 0; // Default to 0 if invalid
        }
    }

    void setSeconds(int s) {
        if (s >= 0 && s < 60) { // Valid seconds are 0-59
            seconds = s;
        } else {
            seconds = 0; // Default to 0 if invalid
        }
    }

    // Getters
    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    // Increment the clock by one second, handling rollovers
    void tick() {
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0; // Rollover to the next day
                }
            }
        }
    }

    // Display the time in 24-hour format
    void displayTime24Hour() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    // Display the time in 12-hour format (AM/PM)
    void displayTime12Hour() const {
        int displayHours = hours % 12;
        if (displayHours == 0) {
            displayHours = 12; // 12 AM/PM
        }

        std::string ampm = (hours < 12) ? "AM" : "PM";

        std::cout << std::setw(2) << std::setfill('0') << displayHours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << " " << ampm << std::endl;
    }
};

int main() {
    // Create a clock object using the default constructor
    Clock myClock;
    std::cout << "Default Clock (12-hour format): ";
    myClock.displayTime12Hour(); // Expected Output: 12:00:00 AM

    // Create a clock object with specific time
    Clock specificTime(14, 30, 45); // 2:30:45 PM
    std::cout << "Specific Time (24-hour format): ";
    specificTime.displayTime24Hour(); // Expected Output: 14:30:45

    // Increment the specific time
    std::cout << "After 1 second tick (12-hour format): ";
    specificTime.tick();
    specificTime.displayTime12Hour(); // Expected Output: 02:30:46 PM

    // Test rollover from 11:59:59 PM to 12:00:00 AM
    Clock rolloverClock(23, 59, 59);
    std::cout << "Rollover Test (12-hour format) - Initial: ";
    rolloverClock.displayTime12Hour();
    rolloverClock.tick();
    std::cout << "Rollover Test (12-hour format) - After tick: ";
    rolloverClock.displayTime12Hour(); // Expected Output: 12:00:00 AM

    // Test rollover from 11:59:59 AM to 12:00:00 PM
    Clock midDayRollover(11, 59, 59);
    std::cout << "Mid-day Rollover Test (12-hour format) - Initial: ";
    midDayRollover.displayTime12Hour();
    midDayRollover.tick();
    std::cout << "Mid-day Rollover Test (12-hour format) - After tick: ";
    midDayRollover.displayTime12Hour(); // Expected Output: 12:00:00 PM

    return 0;
}