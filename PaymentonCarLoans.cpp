#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double loanAmount, annualInterestRate;
  int loanTermYears;

  cout << "Enter the loan amount: ";
  cin >> loanAmount;

  cout << "Enter the annual interest rate (e.g., 5 for 5%): ";
  cin >> annualInterestRate;

  cout << "Enter the loan term in years: ";
  cin >> loanTermYears;

  double monthlyInterestRate = annualInterestRate / 100 / 12;

  int numberOfPayments = loanTermYears * 12;

  double monthlyPayment = (loanAmount * monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments)) / (pow(1 + monthlyInterestRate, numberOfPayments) - 1);

  cout << fixed << setprecision(2); // Format output to two decimal places
  cout << "Monthly Payment: $" << monthlyPayment << endl;

  return 0;
}
