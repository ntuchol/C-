#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Function to simulate a single coin toss
std::string coinToss() {
    // Generate a random number (0 or 1)
    int result = rand() % 2; 

    if (result == 0) {
        return "Heads";
    } else {
        return "Tails";
    }
}

int main() {
    // Seed the random number generator once
    srand(static_cast<unsigned int>(time(NULL))); 

    int numTosses;
    std::cout << "Enter the number of coin tosses: ";
    std::cin >> numTosses;

    for (int i = 0; i < numTosses; ++i) {
        std::cout << "Toss " << (i + 1) << ": " << coinToss() << std::endl;
    }

    return 0;
}