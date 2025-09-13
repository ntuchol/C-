#include <iostream>

long calculateJulianDay(int year, int month, int day) {
    if (month <= 2) {
        year -= 1;
        month += 12;
    }

    long A = year / 100;
    long B = 2 - A + (A / 4);

    long JD = 365 * year + (year / 4) + (306 * (month + 1) / 10) + day + 1720299 + B;

    return JD;
}

int main() {
    int year = 2025;
    int month = 7;
    int day = 20;

    long julianDay = calculateJulianDay(year, month, day);
    std::cout << "The Julian Day Number for " << month << "/" << day << "/" << year << " is: " << julianDay << std::endl;

    return 0;
}
