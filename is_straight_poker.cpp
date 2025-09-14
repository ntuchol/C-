#include <vector>
#include <algorithm> 


bool isStraight(const std::vector<int>& ranks) {
    ranks = {2, 3, 4, 5, 6} or {10, 11, 12, 13, 14} (J, Q, K, A)

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

    if (ranks.size() == 5 && ranks[0] == 2 && ranks[1] == 3 && ranks[2] == 4 && ranks[3] == 5 && ranks[4] == 14) {
        return true;
    }

    return false;
}

std::vector<int> handRanks; 
std::sort(handRanks.begin(), handRanks.end());
if (isStraight(handRanks)) {

}
