#include <iostream>
#include <vector>
#include <map>

int main() {
    double amount_dollars;
    std::cout << "Enter the amount of money (e.g., 15.67): $";
    std::cin >> amount_dollars;

    int amount_cents = static_cast<int>(amount_dollars * 100 + 0.5); 
    std::vector<int> denominations = {
        10000, 
        5000,  
        2000, 
        1000,  
        500,   
        100,  
        50,    
        25,    
        10,    
        5,     
        1      
    };

    std::map<int, int> counts;

    std::cout << "\nBreakdown of " << amount_dollars << " into bills and coins:\n";

    for (int denom : denominations) {
        if (amount_cents >= denom) {
            int num_units = amount_cents / denom;
            counts[denom] = num_units;
            amount_cents %= denom; 
        }
    }

    for (auto const& [denom, count] : counts) {
        if (count > 0) {
            if (denom >= 100) { 
                std::cout << "$" << denom / 100 << " bills: " << count << "\n";
            } else { 
                std::cout << denom << " cent coins: " << count << "\n";
            }
        }
    }

    if (amount_cents > 0) {
        std::cout << "Remaining cents (due to rounding/unaccounted small amounts): " << amount_cents << "\n";
    }

    return 0;
}
