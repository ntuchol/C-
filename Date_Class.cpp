#include <iostream>
#include <string>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d, int m, int y) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            month = 1; // Default to January if invalid
        }
        day = d;
        year = y;
    }

    // Accessor functions
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    // Mutator functions (with basic validation)
    void setDay(int d) { day = d; } // More robust validation needed for real-world
    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            // Handle error or default
        }
    }
    void setYear(int y) { year = y; }

    // Display function
    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

int main() {
    Date myDate(20, 7, 2025);
    myDate.displayDate(); // Output: 7/20/2025

    Date invalidMonthDate(1, 15, 2024);
    invalidMonthDate.displayDate(); // Output: 1/1/2024 (due to validation)

    return 0;
}