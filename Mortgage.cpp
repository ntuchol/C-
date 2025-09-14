#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double principal, annualRate;
    int years;

    std::cout << "Enter the loan amount: ";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate (as a decimal, e.g., 0.05 for 5%): ";
    std::cin >> annualRate;
    std::cout << "Enter the loan term in years: ";
    std::cin >> years;

    double monthlyRate = annualRate / 12.0;
    int totalPayments = years * 12;

    double monthlyPayment = principal * (monthlyRate * std::pow(1 + monthlyRate, totalPayments)) / (std::pow(1 + monthlyRate, totalPayments) - 1);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;

    return 0;
}
