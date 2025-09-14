#include <iostream>
#include <vector>
#include <algorithm> 
#include <ctime>    
#include <cstdlib>   

void getUserPicks(std::vector<int>& userPicks, int count, int min, int max) {
}

void generateWinningNumbers(std::vector<int>& winningNumbers, int count, int min, int max) {
    srand(static_cast<unsigned int>(time(0)));
}

int checkMatches(const std::vector<int>& userPicks, const std::vector<int>& winningNumbers) {
    int matches = 0;
    return matches;
}

int main() {
    const int PICK_COUNT = 6;
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 53; 
    
    std::vector<int> userPicks(PICK_COUNT);
    std::vector<int> winningNumbers(PICK_COUNT);

    getUserPicks(userPicks, PICK_COUNT, MIN_NUMBER, MAX_NUMBER);
    generateWinningNumbers(winningNumbers, PICK_COUNT, MIN_NUMBER, MAX_NUMBER);

    int matches = checkMatches(userPicks, winningNumbers);

    return 0;
}
