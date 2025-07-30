#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate and print a random number
    int randomNumber = rand();
    std::cout << "Random number: " << randomNumber << std::endl;

    // Generate a random number within a specific range (e.g., 1 to 100)
    int min = 1;
    int max = 100;
    int rangedNumber = (rand() % (max - min + 1)) + min;
    std::cout << "Random number (1-100): " << rangedNumber << std::endl;

    return 0;
}