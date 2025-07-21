#include <iostream>
#include <cmath> // For pow() function
#include <iomanip> // For formatting output

int main() {
    double principal, annualRate, monthlyRate, monthlyPayment, totalPaid, totalInterest;
    int years, numPayments;

    // Get input from user
    std::cout << "Enter loan amount: ";
    std::cin >> principal;
    std::cout << "Enter annual interest rate (e.g., 5 for 5%): ";
    std::cin >> annualRate;
    std::cout << "Enter loan duration in years: ";
    std::cin >> years;

    // Calculate monthly rate and number of payments
    monthlyRate = (annualRate / 100.0) / 12.0;
    numPayments = years * 12;

    // Calculate monthly payment using the formula
    // ... (implementation of the formula using pow)

    // Calculate total paid and total interest
    totalPaid = monthlyPayment * numPayments;
    totalInterest = totalPaid - principal;

    // Display results with appropriate formatting
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;
    std::cout << "Total Amount Paid: $" << totalPaid << std::endl;
    std::cout << "Total Interest Paid: $" << totalInterest << std::endl;

    return 0;
}
