#include <iostream>
#include <cstdlib> 
#include <ctime>  
int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have a secret number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
