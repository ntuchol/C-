#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    double funds = 1000.0;
    int numBets = 1000;
    int wins = 0;
    int losses = 0;

    srand(time(0)); 

    std::cout << "Starting funds: $" << funds << std::endl;

    for (int i = 0; i < numBets; ++i) {
        double betAmount = 10.0; 

        if (funds < betAmount) {
            std::cout << "Insufficient funds to place bet " << (i + 1) << ". Stopping." << std::endl;
            break;
        }

        int playerRoll = (rand() % 6) + 1; 
        int opponentRoll = (rand() % 6) + 1;

        std::cout << "\nBet " << (i + 1) << ": Player rolled " << playerRoll 
                  << ", Opponent rolled " << opponentRoll << std::endl;

        if (playerRoll > opponentRoll) {
            funds += betAmount;
            wins++;
            std::cout << "You win! Funds: $" << funds << std::endl;
        } else if (playerRoll < opponentRoll) {
            funds -= betAmount;
            losses++;
            std::cout << "You lose! Funds: $" << funds << std::endl;
        } else {
            std::cout << "It's a tie! Funds: $" << funds << std::endl; 
        }
    }

    std::cout << "\n--- Simulation Complete ---" << std::endl;
    std::cout << "Final funds: $" << funds << std::endl;
    std::cout << "Total wins: " << wins << std::endl;
    std::cout << "Total losses: " << losses << std::endl;

    return 0;
}
