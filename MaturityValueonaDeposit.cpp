#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() {
    double principal;
    double annualRate;
    int compoundingFrequency; 
    double timeInYears;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (e.g., 0.05 for 5%): ";
    std::cin >> annualRate;

    std::cout << "Enter the number of times interest is compounded per year (e.g., 12 for monthly): ";
    std::cin >> compoundingFrequency;

    std::cout << "Enter the time in years: ";
    std::cin >> timeInYears;

    double maturityValue = principal * pow((1 + annualRate / compoundingFrequency), (compoundingFrequency * timeInYears));

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "The maturity value of the deposit is: $" << maturityValue << std::endl;

    return 0;
}
