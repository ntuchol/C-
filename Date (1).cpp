#include <iostream>
#include <string>
#include <array>
class Date {
private:
    int month;
    int day;
    int year; 

    static const std::array<std::string, 12> monthNames;

public:
    Date(int m, int d, int y) : month(1), day(1), year(1900) {
        setYear(y); 
        setMonth(m);
        setDay(d);
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            std::cerr << "Invalid month. Setting to 1." << std::endl;
            month = 1; 
        }
    }

    void setDay(int d) {
        if (d >= 1 && d <= 31) { 
            day = d;
        } else {
            std::cerr << "Invalid day. Setting to 1." << std::endl;
            day = 1; 
        }
    }

    void setYear(int y) {
        if (y > 0) {
            year = y;
        } else {
            std::cerr << "Invalid year. Setting to 1900." << std::endl;
            year = 1900;
        }
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    void displayDate() const {
        std::cout << monthNames[month - 1] << " " << day << ", " << year << std::endl;
    }
};

const std::array<std::string, 12> Date::monthNames = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};


int main() {
    Date myDate(7, 10, 2025);
    myDate.displayDate(); 
    Date invalidDate(13, 40, -10); 
    invalidDate.displayDate(); 
    myDate.setMonth(12);
    myDate.setDay(25);
    myDate.displayDate(); 

    return 0;
}

