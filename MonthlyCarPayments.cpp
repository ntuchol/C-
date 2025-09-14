#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() {
    double principal, annualRate, monthlyRate, monthlyPayment;
    int termYears, termMonths;

    std::cout << "Enter the principal loan amount: $";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (e.g., 5.5 for 5.5%): ";
    std::cin >> annualRate;

    std::cout << "Enter the loan term in years: ";
    std::cin >> termYears;

    monthlyRate = (annualRate / 100) / 12;

    termMonths = termYears * 12;

    if (monthlyRate == 0) { 
        monthlyPayment = principal / termMonths;
    } else {
        monthlyPayment = principal * (monthlyRate * std::pow(1 + monthlyRate, termMonths)) / (std::pow(1 + monthlyRate, termMonths) - 1);
    }

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "\nYour estimated monthly car payment is: $" << monthlyPayment << std::endl;

    return 0;
}
