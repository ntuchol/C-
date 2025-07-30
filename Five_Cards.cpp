#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

// Function to check for a pair (simplified, no suits)
bool containsPair(const std::vector<int>& hand) {
    for (size_t i = 0; i < hand.size() - 1; ++i) {
        if (hand[i] == hand[i+1]) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> hand(5);

    std::cout << "Enter five numeric cards (2-9, no face cards):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Card " << i + 1 << ": ";
        std::cin >> hand[i];
    }

    std::sort(hand.begin(), hand.end()); // Sort the hand for easier evaluation

    if (containsPair(hand)) {
        std::cout << "This is a pair." << std::endl;
    } else {
        std::cout << "High card." << std::endl;
    }

    return 0;
}