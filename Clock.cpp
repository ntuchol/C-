#include <iostream>
#include <iomanip> 

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock() : hours(0), minutes(0), seconds(0) {}

    Clock(int h, int m, int s) {
        setHours(h);
        setMinutes(m);
        setSeconds(s);
    }

    void setHours(int h) {
        if (h >= 0 && h < 24) { 
            hours = h;
        } else {
            hours = 0; 
        }
    }

    void setMinutes(int m) {
        if (m >= 0 && m < 60) { 
            minutes = m;
        } else {
            minutes = 0;
        }
    }

    void setSeconds(int s) {
        if (s >= 0 && s < 60) { 
            seconds = s;
        } else {
            seconds = 0; 
        }
    }

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    void tick() {
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0; 
                }
            }
        }
    }

    void displayTime24Hour() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    void displayTime12Hour() const {
        int displayHours = hours % 12;
        if (displayHours == 0) {
            displayHours = 12; 
        }

        std::string ampm = (hours < 12) ? "AM" : "PM";

        std::cout << std::setw(2) << std::setfill('0') << displayHours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << " " << ampm << std::endl;
    }
};

int main() {
    Clock myClock;
    std::cout << "Default Clock (12-hour format): ";
    myClock.displayTime12Hour(); 

    Clock specificTime(14, 30, 45); 
    std::cout << "Specific Time (24-hour format): ";
    specificTime.displayTime24Hour(); 

    std::cout << "After 1 second tick (12-hour format): ";
    specificTime.tick();
    specificTime.displayTime12Hour(); 

    Clock rolloverClock(23, 59, 59);
    std::cout << "Rollover Test (12-hour format) - Initial: ";
    rolloverClock.displayTime12Hour();
    rolloverClock.tick();
    std::cout << "Rollover Test (12-hour format) - After tick: ";
    rolloverClock.displayTime12Hour(); 
    
    Clock midDayRollover(11, 59, 59);
    std::cout << "Mid-day Rollover Test (12-hour format) - Initial: ";
    midDayRollover.displayTime12Hour();
    midDayRollover.tick();
    std::cout << "Mid-day Rollover Test (12-hour format) - After tick: ";
    midDayRollover.displayTime12Hour(); 
    return 0;
}
