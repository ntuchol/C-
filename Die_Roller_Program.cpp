#include <iostream> // For input/output operations (cout)
#include <random>   // For random number generation (mt19937, uniform_int_distribution)
#include <ctime>    // For seeding the random number generator (time)

int main() {
    // Define the range for the dice roll (1 to 6 for a standard die)
    int min_val = 1;
    int max_val = 6;

    // Seed the random number generator using the current time
    // This helps ensure different results each time the program runs
    std::mt19937 generator(static_cast<unsigned int>(std::time(0)));

    // Create a uniform distribution to generate integers within the specified range
    std::uniform_int_distribution<> distribution(min_val, max_val);

    // Generate a random number (the dice roll result)
    int dice_roll_result = distribution(generator);

    // Display the result
    std::cout << "The dice rolled: " << dice_roll_result << std::endl;

    return 0; // Indicate successful program execution
}