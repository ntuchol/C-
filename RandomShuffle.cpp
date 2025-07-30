#include <vector>
#include <algorithm> // For std::shuffle
#include <random>    // For random number engines
#include <chrono>    // For seeding the random number engine

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Create a random number engine and seed it
    // Using std::chrono::system_clock::now().time_since_epoch().count() for a more unique seed
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine rng(seed); 

    // Shuffle the vector
    std::shuffle(myVector.begin(), myVector.end(), rng);

    // Now myVector contains the shuffled elements
    // For example, it might be {5, 1, 9, 3, 7, 2, 10, 4, 6, 8}
    return 0;
}