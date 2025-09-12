#include <iostream>
#include <ctime> 
class Date {
private:
    int month;
    int day;
    int year;

public:
    Date() {
        time_t timer;
        std::time(&timer);

        tm* localTime = std::localtime(&timer);

        month = localTime->tm_mon + 1; 
        day = localTime->tm_mday;
        year = localTime->tm_year + 1900; 
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
        std::cout << "Current Date: " << month << "/" << day << "/" << year << std::endl;
    }
};

int main() {
    Date currentDate; 
    currentDate.displayDate(); 

    std::cout << "Month: " << currentDate.getMonth() << std::endl;
    std::cout << "Day: " << currentDate.getDay() << std::endl;
    std::cout << "Year: " << currentDate.getYear() << std::endl;

    return 0;
}
