#include <iostream> 
#include <random>   
#include <chrono>   

int main() {
    std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());

    std::uniform_int_distribution<int> distribution(1, 6);

    int diceRoll = distribution(generator);

    std::cout << "You rolled a: " << diceRoll << std::endl;

    return 0;
}
