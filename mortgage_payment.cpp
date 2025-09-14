#include <iostream>  
#include <cmath>    

using namespace std;

int main() {
    double principal;
    double annualInterestRate;
    int loanTermYears;

    cout << "Enter the principal loan amount: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage, e.g., 5 for 5%): ";
    cin >> annualInterestRate;

    cout << "Enter the loan term in years: ";
    cin >> loanTermYears;

    double monthlyInterestRate = (annualInterestRate / 100) / 12;

    int numberOfPayments = loanTermYears * 12;

    monthlyPayment = principal * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfPayments))
    double monthlyPayment = principal * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));

    cout << "Your estimated monthly mortgage payment is: $" << monthlyPayment << endl;

    return 0;
}
