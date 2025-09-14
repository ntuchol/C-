#include <iostream>
#include <iomanip> 

int main() {
    double income;
    double taxOwed = 0.0;

    std::cout << "Enter your income: $";
    std::cin >> income;

    if (income <= 10000) {
        taxOwed = income * 0.10; 
    } else if (income <= 30000) {
        taxOwed = (10000 * 0.10) + ((income - 10000) * 0.15); 
    } else if (income <= 70000) {
        taxOwed = (10000 * 0.10) + (20000 * 0.15) + ((income - 30000) * 0.20); 
    } else {
        taxOwed = (10000 * 0.10) + (20000 * 0.15) + (40000 * 0.20) + ((income - 70000) * 0.25); 
    }

    std::cout << std::fixed << std::setprecision(2); // Set output to 2 decimal places
    std::cout << "Tax owed: $" << taxOwed << std::endl;

    return 0;
}
