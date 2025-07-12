#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Function to simulate rolling two dice
int rollDice() {
    int die1 = (rand() % 6) + 1; // Generates a random number from 1 to 6
    int die2 = (rand() % 6) + 1;
    return die1 + die2;
}

int main() {
    srand(time(0)); // Seed the random number generator

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        int sum = rollDice();
        int point = 0;

        std::cout << "You rolled: " << sum << std::endl;

        // First roll logic
        if (sum == 7 || sum == 11) {
            std::cout << "Natural! You win!" << std::endl;
        } else if (sum == 2 || sum == 3 || sum == 12) {
            std::cout << "Craps! You lose!" << std::endl;
        } else {
            point = sum;
            std::cout << "Point is " << point << ". Roll again to make your point or roll a 7 to lose." << std::endl;

            // Subsequent rolls (point phase)
            while (true) {
                sum = rollDice();
                std::cout << "You rolled: " << sum << std::endl;

                if (sum == point) {
                    std::cout << "Made the point! You win!" << std::endl;
                    break;
                } else if (sum == 7) {
                    std::cout << "Seven out! You lose!" << std::endl;
                    break;
                }
            }
        }

        std::cout << "Play another game? (Y/N): ";
        std::cin >> playAgain;
    }

    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}