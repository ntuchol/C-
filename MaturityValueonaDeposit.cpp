#include <iostream>
#include <cmath> // Required for the pow() function
#include <iomanip> // Required for setprecision

int main() {
    double principal;
    double annualRate;
    int compoundingFrequency; // e.g., 1 for annually, 12 for monthly
    double timeInYears;

    // Get input from the user
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (e.g., 0.05 for 5%): ";
    std::cin >> annualRate;

    std::cout << "Enter the number of times interest is compounded per year (e.g., 12 for monthly): ";
    std::cin >> compoundingFrequency;

    std::cout << "Enter the time in years: ";
    std::cin >> timeInYears;

    // Calculate the maturity value
    double maturityValue = principal * pow((1 + annualRate / compoundingFrequency), (compoundingFrequency * timeInYears));

    // Display the result
    std::cout << std::fixed << std::setprecision(2); // Format output to two decimal places
    std::cout << "The maturity value of the deposit is: $" << maturityValue << std::endl;

    return 0;
}