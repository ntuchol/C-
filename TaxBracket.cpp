#include <iostream>
#include <iomanip> // For setting precision on the output

int main() {
    double income;
    double taxOwed = 0.0;

    std::cout << "Enter your income: $";
    std::cin >> income;

    // Example tax brackets (these are simplified and may not reflect actual tax laws)
    if (income <= 10000) {
        taxOwed = income * 0.10; // 10% for income up to $10,000
    } else if (income <= 30000) {
        taxOwed = (10000 * 0.10) + ((income - 10000) * 0.15); // 10% on first $10k, 15% on excess
    } else if (income <= 70000) {
        taxOwed = (10000 * 0.10) + (20000 * 0.15) + ((income - 30000) * 0.20); // Progressive rates
    } else {
        taxOwed = (10000 * 0.10) + (20000 * 0.15) + (40000 * 0.20) + ((income - 70000) * 0.25); // Progressive rates
    }

    std::cout << std::fixed << std::setprecision(2); // Set output to 2 decimal places
    std::cout << "Tax owed: $" << taxOwed << std::endl;

    return 0;
}