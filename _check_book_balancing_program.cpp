#include <iostream>
#include <iomanip> // For formatting output

int main() {
    double initialBalance;
    double currentBalance;
    double totalServiceCharges = 0.0;
    const double CHECK_SERVICE_CHARGE = 0.25; // Example service charge

    std::cout << "Welcome to the Checkbook Balancer!" << std::endl;
    std::cout << "Enter your initial balance: $";
    std::cin >> initialBalance;
    currentBalance = initialBalance;

    char transactionType;
    double transactionAmount;

    do {
        std::cout << "\nEnter transaction type (D for Deposit, C for Check, E to End): ";
        std::cin >> transactionType;
        transactionType = toupper(transactionType); // Convert to uppercase for case-insensitivity

        if (transactionType == 'D') {
            std::cout << "Enter deposit amount: $";
            std::cin >> transactionAmount;
            if (transactionAmount > 0) {
                currentBalance += transactionAmount;
                std::cout << "Deposit successful. Current balance: $" << std::fixed << std::setprecision(2) << currentBalance << std::endl;
            } else {
                std::cout << "Invalid deposit amount. Must be positive." << std::endl;
            }
        } else if (transactionType == 'C') {
            std::cout << "Enter check amount: $";
            std::cin >> transactionAmount;
            if (transactionAmount > 0) {
                currentBalance -= transactionAmount;
                totalServiceCharges += CHECK_SERVICE_CHARGE;
                std::cout << "Check processed. Current balance: $" << std::fixed << std::setprecision(2) << currentBalance << std::endl;
                std::cout << "Service charge: $" << std::fixed << std::setprecision(2) << CHECK_SERVICE_CHARGE << std::endl;
            } else {
                std::cout << "Invalid check amount. Must be positive." << std::endl;
            }
        } else if (transactionType == 'E') {
            std::cout << "\nEnding transaction input." << std::endl;
        } else {
            std::cout << "Invalid transaction type. Please enter D, C, or E." << std::endl;
        }
    } while (transactionType != 'E');

    // Deduct total service charges at the end
    currentBalance -= totalServiceCharges;

    std::cout << "\n--- End of Month Summary ---" << std::endl;
    std::cout << "Initial Balance: $" << std::fixed << std::setprecision(2) << initialBalance << std::endl;
    std::cout << "Total Service Charges: $" << std::fixed << std::setprecision(2) << totalServiceCharges << std::endl;
    std::cout << "Final Balance: $" << std::fixed << std::setprecision(2) << currentBalance << std::endl;

    return 0;
}