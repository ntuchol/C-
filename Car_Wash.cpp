#include <iostream>
#include <string>

// Function to display car wash options
void displayWashOptions() {
    std::cout << "\n--- Car Wash Services ---" << std::endl;
    std::cout << "1. Basic Wash - $10" << std::endl;
    std::cout << "2. Premium Wash - $15" << std::endl;
    std::cout << "3. Deluxe Wash - $20" << std::endl;
    std::cout << "Enter your choice: ";
}

// Function to calculate wash fee
double calculateFee(int choice) {
    switch (choice) {
        case 1: return 10.0;
        case 2: return 15.0;
        case 3: return 20.0;
        default: return 0.0; // Invalid choice
    }
}

int main() {
    int washChoice;
    double totalFee;

    displayWashOptions();
    std::cin >> washChoice;

    totalFee = calculateFee(washChoice);

    if (totalFee > 0) {
        std::cout << "Your total fee is: $" << totalFee << std::endl;
        std::cout << "Thank you for using our car wash!" << std::endl;
    } else {
        std::cout << "Invalid choice. Please try again." << std::endl;
    }

    return 0;
}