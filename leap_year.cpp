#include <iostream>

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true; // Divisible by 400, so it's a leap year
    } else if (year % 100 == 0) {
        return false; // Divisible by 100 but not 400, so not a leap year
    } else if (year % 4 == 0) {
        return true; // Divisible by 4 but not 100, so it's a leap year
    } else {
        return false; // Not divisible by 4, so not a leap year
    }
}

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}