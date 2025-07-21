#include <iostream>

int main() {
    double income;
    double tax = 0.0;

    std::cout << "Enter your income: $";
    std::cin >> income;

    if (income <= 10000) {
        tax = income * 0.10; // 10% for income up to $10,000
    } else if (income <= 50000) {
        tax = (10000 * 0.10) + ((income - 10000) * 0.15); // 10% on first $10k, 15% on rest
    } else {
        tax = (10000 * 0.10) + (40000 * 0.15) + ((income - 50000) * 0.20); // 10% on first $10k, 15% on next $40k, 20% on rest
    }

    std::cout << "Your estimated tax is: $" << tax << std::endl;

    return 0;
}
