#include <vector>
#include <algorithm> // For std::sort

// Assuming a Card class with a GetRank() method
// and a Hand class containing a vector of Cards

bool isStraight(const std::vector<int>& ranks) {
    // ranks should be sorted ascendingly
    // Example: ranks = {2, 3, 4, 5, 6} or {10, 11, 12, 13, 14} (J, Q, K, A)

    // Check for standard straight
    bool consecutive = true;
    for (size_t i = 0; i < ranks.size() - 1; ++i) {
        if (ranks[i+1] != ranks[i] + 1) {
            consecutive = false;
            break;
        }
    }
    if (consecutive) {
        return true;
    }

    // Check for the "wheel" straight (A, 2, 3, 4, 5)
    // Assuming Ace is represented as 14, and the sorted hand would be 2, 3, 4, 5, 14
    if (ranks.size() == 5 && ranks[0] == 2 && ranks[1] == 3 && ranks[2] == 4 && ranks[3] == 5 && ranks[4] == 14) {
        return true;
    }

    return false;
}

// In your poker game logic:
// std::vector<int> handRanks; // Populate with ranks from the dealt hand
// std::sort(handRanks.begin(), handRanks.end());
// if (isStraight(handRanks)) {
//     // Hand is a straight
// }