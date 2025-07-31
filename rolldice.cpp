#include <iostream> // For input/output operations (e.g., std::cout)
#include <random>   // For random number generation (e.g., std::mt19937, std::uniform_int_distribution)
#include <chrono>   // For seeding the random number generator (e.g., std::chrono::system_clock)

int main() {
    // 1. Seed the random number generator
    // Using std::random_device or std::chrono::system_clock::now().time_since_epoch().count()
    // provides a more unique seed for each program execution compared to older methods like time(0).
    std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());

    // 2. Define the distribution for the dice roll
    // A uniform_int_distribution ensures that each integer within the range has an equal probability.
    // For a standard six-sided die, the range is 1 to 6 (inclusive).
    std::uniform_int_distribution<int> distribution(1, 6);

    // 3. Generate the dice roll
    int diceRoll = distribution(generator);

    // 4. Display the result
    std::cout << "You rolled a: " << diceRoll << std::endl;

    return 0;
}