

#include <iostream>
#include <iomanip> 

int main() {
    double baseSalary;
    double salesAmount;
    double commissionRate;
    double totalEarnings;

    std::cout << "Enter the base salary: $";
    std::cin >> baseSalary;

    std::cout << "Enter the total sales amount: $";
    std::cin >> salesAmount;

    std::cout << "Enter the commission rate (as a decimal, e.g., 0.05 for 5%): ";
    std::cin >> commissionRate;

    double commission = salesAmount * commissionRate;

    totalEarnings = baseSalary + commission;

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "\n--- Earnings Summary ---" << std::endl;
    std::cout << "Base Salary: $" << baseSalary << std::endl;
    std::cout << "Commission Earned: $" << commission << std::endl;
    std::cout << "Total Earnings: $" << totalEarnings << std::endl;

    return 0;
