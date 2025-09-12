#include <iostream>

int main() {
    double income;
    double tax = 0.0;

    std::cout << "Enter your income: $";
    std::cin >> income;

    if (income <= 10000) {
        tax = income * 0.10; 
    } else if (income <= 50000) {
        tax = (10000 * 0.10) + ((income - 10000) * 0.15); 
    } else {
        tax = (10000 * 0.10) + (40000 * 0.15) + ((income - 50000) * 0.20); 
    }

    std::cout << "Your estimated tax is: $" << tax << std::endl;

    return 0;
}
