double monthlyInterestRate = (annualInterestRate / 100) / 12;
int numberOfPayments = loanDurationYears * 12;
M = P * [R * (1 + R)^N] / [(1 + R)^N - 1]
#include <cmath> 

double monthlyPayment = (loanAmount * monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments)) / (pow(1 + monthlyInterestRate, numberOfPayments) - 1);
double totalAmountPaidBack = monthlyPayment * numberOfPayments;
double totalInterestPaid = totalAmountPaidBack - loanAmount;
