#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> denominations = {1000, 500, 100, 50, 20, 10, 5, 2, 1}; 
    int amount = 770;
    int coins_needed = 0;

    std::cout << "Making change for " << amount << " using greedy algorithm:" << std::endl;

    for (int denom : denominations) {
        while (amount >= denom) {
            amount -= denom;
            coins_needed++;
            std::cout << "Used " << denom << " (Remaining amount: " << amount << ")" << std::endl;
        }
    }

    std::cout << "Total coins needed: " << coins_needed << std::endl;

    return 0;
}
