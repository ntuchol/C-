#include <random> 
#include <chrono> 
#include <stdexcept> 
class Dice {
private:
    int numSides;
    std::mt19937 generator; 

public:
    explicit Dice(int sides) : numSides(sides) {
        if (sides < 1) {
            throw std::invalid_argument("Number of sides must be at least 1.");
        }
        generator.seed(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    }

    int roll() {
        std::uniform_int_distribution<int> distribution(1, numSides);
        return distribution(generator);
    }

    int getNumSides() const {
        return numSides;
    }
};
