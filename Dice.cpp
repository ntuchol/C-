#include <random> // For std::mt19937 and std::uniform_int_distribution
#include <chrono> // For seeding the random number generator
#include <stdexcept> // For std::invalid_argument

class Dice {
private:
    int numSides;
    std::mt19937 generator; // Mersenne Twister engine for random numbers

public:
    // Constructor
    explicit Dice(int sides) : numSides(sides) {
        if (sides < 1) {
            throw std::invalid_argument("Number of sides must be at least 1.");
        }
        // Seed the random number generator using the current time
        generator.seed(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    }

    // Member function to roll the die
    int roll() {
        std::uniform_int_distribution<int> distribution(1, numSides);
        return distribution(generator);
    }

    // Getter for the number of sides
    int getNumSides() const {
        return numSides;
    }
};