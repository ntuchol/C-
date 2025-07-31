#include <iostream>
#include <cmath> // For std::exp and std::pow

int main() {
    double principal;
    double interestRate; // As a decimal, e.g., 0.05 for 5%
    double timeInYears;
    double accumulatedAmount;

    // Get user input for principal, interest rate, and time
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (as a decimal, e.g., 0.05 for 5%): ";
    std::cin >> interestRate;

    std::cout << "Enter the time in years: ";
    std::cin >> timeInYears;

    // Calculate accumulated amount using the formula
    accumulatedAmount = principal * std::exp(interestRate * timeInYears); 

    // Output the result
    std::cout << "The accumulated amount after continuous compounding is: " << accumulatedAmount << std::endl;

    return 0;
}