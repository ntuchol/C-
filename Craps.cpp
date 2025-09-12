#include <iostream>
#include <cstdlib> 
#include <ctime>   
int rollDie() {
    return (rand() % 6) + 1; 
}
void playCraps() {
    int die1 = rollDie();
    int die2 = rollDie();
    int sum = die1 + die2;

    std::cout << "Rolling dice now... You rolled a " << sum << std::endl;

    if (sum == 7 || sum == 11) {
        std::cout << "You win! (Natural)" << std::endl;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        std::cout << "You lose! (Craps)" << std::endl;
    } else {
        int point = sum;
        std::cout << "Point is " << point << ". Roll again!" << std::endl;

        while (true) {
            die1 = rollDie();
            die2 = rollDie();
            sum = die1 + die2;
            std::cout << "You rolled a " << sum << std::endl;

            if (sum == point) {
                std::cout << "You win! (Made the point)" << std::endl;
                break;
            } else if (sum == 7) {
                std::cout << "You lose! (Rolled a 7)" << std::endl;
                break;
            }
        }
    }
}

int main() {
    srand(time(0)); 
    playCraps();

    return 0;
}
