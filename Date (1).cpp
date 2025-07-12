#include <iostream>
#include <string>
#include <array>

class Date {
private:
    int month;
    int day;
    int year; // Added year for complete date representation and validation

    // Array to store month names for conversion
    static const std::array<std::string, 12> monthNames;

public:
    // Constructor
    Date(int m, int d, int y) : month(1), day(1), year(1900) { // Initialize with default values
        setYear(y); // Set year first for leap year calculations
        setMonth(m);
        setDay(d);
    }

    // Setters with basic validation
    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            std::cerr << "Invalid month. Setting to 1." << std::endl;
            month = 1; // Default to January
        }
    }

    void setDay(int d) {
        // Simple day validation (can be expanded for specific month lengths and leap years)
        if (d >= 1 && d <= 31) { // Basic check, refine for specific months
            day = d;
        } else {
            std::cerr << "Invalid day. Setting to 1." << std::endl;
            day = 1; // Default to 1st
        }
        // More robust validation would involve checking day against month and year (e.g., 30 days in April, leap year for February)
    }

    void setYear(int y) {
        // Basic year validation (e.g., positive year)
        if (y > 0) {
            year = y;
        } else {
            std::cerr << "Invalid year. Setting to 1900." << std::endl;
            year = 1900;
        }
    }

    // Getters
    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    // Function to display the date in a readable format
    void displayDate() const {
        std::cout << monthNames[month - 1] << " " << day << ", " << year << std::endl;
    }
};

// Initialize static member outside the class definition
const std::array<std::string, 12> Date::monthNames = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

/*
int main() {
    Date myDate(7, 10, 2025);
    myDate.displayDate(); // Output: July 10, 2025

    Date invalidDate(13, 40, -10); // Demonstrates validation
    invalidDate.displayDate(); // Output: January 1, 1900 (with error messages)

    myDate.setMonth(12);
    myDate.setDay(25);
    myDate.displayDate(); // Output: December 25, 2025

    return 0;
}
*/