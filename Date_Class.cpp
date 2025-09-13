#include <iostream>
#include <string>

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            month = 1; 
        }
        day = d;
        year = y;
    }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void setDay(int d) { day = d; } 
    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
        }
    }
    void setYear(int y) { year = y; }

    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

int main() {
    Date myDate(20, 7, 2025);
    myDate.displayDate(); 
    
    Date invalidMonthDate(1, 15, 2024);
    invalidMonthDate.displayDate(); 
    
    return 0;
}
