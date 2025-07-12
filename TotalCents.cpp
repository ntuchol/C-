#include <iostream>

int main() {
    int totalCents;

    // Prompt the user for input
    std::cout << "Enter the total amount in cents: ";
    std::cin >> totalCents;

    // Calculate the number of quarters
    int quarters = totalCents / 25;
    totalCents %= 25; // Update remaining cents after quarters

    // Calculate the number of dimes
    int dimes = totalCents / 10;
    totalCents %= 10; // Update remaining cents after dimes

    // Calculate the number of nickels
    int nickels = totalCents / 5;
    totalCents %= 5; // Update remaining cents after nickels

    // The remaining cents are pennies
    int pennies = totalCents;

    // Display the results
    std::cout << "Number of Quarters: " << quarters << std::endl;
    std::cout << "Number of Dimes: " << dimes << std::endl;
    std::cout << "Number of Nickels: " << nickels << std::endl;
    std::cout << "Number of Pennies: " << pennies << std::endl;

    return 0;
}