#include <iostream>
#include <vector> 

void playerTurn(std::vector<int>& piles) {
}

void computerTurn(std::vector<int>& piles) {
}

int main() {
    std::vector<int> piles = {3, 4, 5}; 
    int currentPlayer = 1; 

    while (true) { 
        if (currentPlayer == 1) {
            playerTurn(piles);
        } else {
            computerTurn(piles);
        }

    }
    return 0;
}
