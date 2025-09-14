#include <iostream>
#include <cmath> 

int main() {
    double principal;
    double interestRate; 
    double timeInYears;
    double accumulatedAmount;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (as a decimal, e.g., 0.05 for 5%): ";
    std::cin >> interestRate;

    std::cout << "Enter the time in years: ";
    std::cin >> timeInYears;

    accumulatedAmount = principal * std::exp(interestRate * timeInYears); 

    std::cout << "The accumulated amount after continuous compounding is: " << accumulatedAmount << std::endl;

    return 0;
}
