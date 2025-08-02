

#include <iostream>
#include <iomanip> // For formatting output

int main() {
    double baseSalary;
    double salesAmount;
    double commissionRate;
    double totalEarnings;

    // Get input from the user
    std::cout << "Enter the base salary: $";
    std::cin >> baseSalary;

    std::cout << "Enter the total sales amount: $";
    std::cin >> salesAmount;

    std::cout << "Enter the commission rate (as a decimal, e.g., 0.05 for 5%): ";
    std::cin >> commissionRate;

    // Calculate commission
    double commission = salesAmount * commissionRate;

    // Calculate total earnings
    totalEarnings = baseSalary + commission;

    // Display the results
    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places
    std::cout << "\n--- Earnings Summary ---" << std::endl;
    std::cout << "Base Salary: $" << baseSalary << std::endl;
    std::cout << "Commission Earned: $" << commission << std::endl;
    std::cout << "Total Earnings: $" << totalEarnings << std::endl;

    return 0;