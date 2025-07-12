#include <iostream>
#include <ctime> // Required for time_t, tm, time(), and localtime()

class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructor to initialize with the current date
    Date() {
        // Get the current time
        time_t timer;
        std::time(&timer);

        // Convert to local time structure
        tm* localTime = std::localtime(&timer);

        // Extract and store date components
        // tm_mon is 0-indexed (0 for January, 11 for December)
        month = localTime->tm_mon + 1; 
        day = localTime->tm_mday;
        // tm_year is years since 1900
        year = localTime->tm_year + 1900; 
    }

    // Getters for date components
    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    // Method to display the date
    void displayDate() const {
        std::cout << "Current Date: " << month << "/" << day << "/" << year << std::endl;
    }
};

// Example usage in main function
int main() {
    Date currentDate; // Creates a Date object initialized with the current date
    currentDate.displayDate(); // Displays the current date

    std::cout << "Month: " << currentDate.getMonth() << std::endl;
    std::cout << "Day: " << currentDate.getDay() << std::endl;
    std::cout << "Year: " << currentDate.getYear() << std::endl;

    return 0;
}