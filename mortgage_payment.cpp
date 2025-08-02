#include <iostream>  // For input/output operations
#include <cmath>     // For the pow() function

using namespace std;

int main() {
    // Declare variables
    double principal;
    double annualInterestRate;
    int loanTermYears;

    // Get input from the user
    cout << "Enter the principal loan amount: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage, e.g., 5 for 5%): ";
    cin >> annualInterestRate;

    cout << "Enter the loan term in years: ";
    cin >> loanTermYears;

    // Convert annual interest rate to monthly rate
    // and percentage to decimal
    double monthlyInterestRate = (annualInterestRate / 100) / 12;

    // Calculate the total number of payments (months)
    int numberOfPayments = loanTermYears * 12;

    // Calculate the monthly mortgage payment using the formula:
    // monthlyPayment = principal * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfPayments))
    double monthlyPayment = principal * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));

    // Display the result
    cout << "Your estimated monthly mortgage payment is: $" << monthlyPayment << endl;

    return 0;
}