#include <iostream>
#include <cmath> // For pow() function
#include <iomanip> // For setprecision and fixed

int main() {
    double principal, annualRate, monthlyRate, monthlyPayment;
    int termYears, termMonths;

    std::cout << "Enter the principal loan amount: $";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (e.g., 5.5 for 5.5%): ";
    std::cin >> annualRate;

    std::cout << "Enter the loan term in years: ";
    std::cin >> termYears;

    // Convert annual rate to monthly decimal rate
    monthlyRate = (annualRate / 100) / 12;

    // Calculate total number of months
    termMonths = termYears * 12;

    // Calculate monthly payment using the formula
    if (monthlyRate == 0) { // Handle zero interest rate case
        monthlyPayment = principal / termMonths;
    } else {
        monthlyPayment = principal * (monthlyRate * std::pow(1 + monthlyRate, termMonths)) / (std::pow(1 + monthlyRate, termMonths) - 1);
    }

    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places
    std::cout << "\nYour estimated monthly car payment is: $" << monthlyPayment << std::endl;

    return 0;
}