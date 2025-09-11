#include <iostream>
#include <cmath> 
#include <iomanip> 

int main() {
    double principal, annualRate, monthlyRate, monthlyPayment, totalPaid, totalInterest;
    int years, numPayments;

    std::cout << "Enter loan amount: ";
    std::cin >> principal;
    std::cout << "Enter annual interest rate (e.g., 5 for 5%): ";
    std::cin >> annualRate;
    std::cout << "Enter loan duration in years: ";
    std::cin >> years;

    monthlyRate = (annualRate / 100.0) / 12.0;
    numPayments = years * 12;

    totalPaid = monthlyPayment * numPayments;
    totalInterest = totalPaid - principal;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;
    std::cout << "Total Amount Paid: $" << totalPaid << std::endl;
    std::cout << "Total Interest Paid: $" << totalInterest << std::endl;

    return 0;
}
