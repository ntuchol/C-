Simple Interest (SI) = (Principal * Rate * Time) / 100
#include <iostream>

int main() {
    double principal, rate, time;

    std::cout << "Enter principal amount: ";
    std::cin >> principal;

    std::cout << "Enter annual interest rate (e.g., 5 for 5%): ";
    std::cin >> rate;

    std::cout << "Enter time in years: ";
    std::cin >> time;

    double simpleInterest = (principal * rate * time) / 100.0; 
    std::cout << "Simple Interest: " << simpleInterest << std::endl;

    return 0;
}
