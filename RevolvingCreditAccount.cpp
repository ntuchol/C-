#include <iostream>
#include <iomanip> // Required for std::fixed and std::setprecision

int main() {
    double accountBalance;
    double interestDue;
    double totalDue;
    double minimumPayment;

    // Get the account balance from the user
    std::cout << "Enter the account balance: $";
    std::cin >> accountBalance;

    // Calculate interest due based on the tiered structure
    if (accountBalance <= 1000) {
        interestDue = accountBalance * 0.015; // 1.5% interest on the entire balance
    } else {
        interestDue = (1000 * 0.015) + ((accountBalance - 1000) * 0.01); // 1.5% on first $1000 + 1% on the rest
    }

    // Calculate total amount due
    totalDue = accountBalance + interestDue;

    // Calculate minimum payment
    if (totalDue < 10) {
        minimumPayment = totalDue; // Minimum payment is the total due if less than $10
    } else {
        minimumPayment = totalDue * 0.10; // Minimum payment is 10% of the total due
    }

    // Display the results with two decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Interest Due: $" << interestDue << std::endl;
    std::cout << "Total Due: $" << totalDue << std::endl;
    std::cout << "Minimum Payment: $" << minimumPayment << std::endl;

    return 0;
}