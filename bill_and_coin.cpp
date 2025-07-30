#include <iostream>
#include <vector>
#include <map>

int main() {
    double amount_dollars;
    std::cout << "Enter the amount of money (e.g., 15.67): $";
    std::cin >> amount_dollars;

    // Convert to cents to avoid floating-point precision issues
    int amount_cents = static_cast<int>(amount_dollars * 100 + 0.5); // Add 0.5 for proper rounding

    // Define denominations in cents, from largest to smallest
    std::vector<int> denominations = {
        10000, // $100
        5000,  // $50
        2000,  // $20
        1000,  // $10
        500,   // $5
        100,   // $1
        50,    // 50 cents
        25,    // 25 cents (quarter)
        10,    // 10 cents (dime)
        5,     // 5 cents (nickel)
        1      // 1 cent (penny)
    };

    // Map to store the count of each denomination
    std::map<int, int> counts;

    std::cout << "\nBreakdown of " << amount_dollars << " into bills and coins:\n";

    for (int denom : denominations) {
        if (amount_cents >= denom) {
            int num_units = amount_cents / denom;
            counts[denom] = num_units;
            amount_cents %= denom; // Update remaining amount
        }
    }

    // Print the results
    for (auto const& [denom, count] : counts) {
        if (count > 0) {
            if (denom >= 100) { // Bills
                std::cout << "$" << denom / 100 << " bills: " << count << "\n";
            } else { // Coins
                std::cout << denom << " cent coins: " << count << "\n";
            }
        }
    }

    if (amount_cents > 0) {
        std::cout << "Remaining cents (due to rounding/unaccounted small amounts): " << amount_cents << "\n";
    }

    return 0;
}