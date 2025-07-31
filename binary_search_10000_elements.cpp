#include <iostream>
    #include <vector>
    #include <algorithm> // For std::sort and std::binary_search
    #include <random>    // For modern C++ random number generation
    #include <chrono>    // For seeding the random number generator

    int main() {
        // Seed the random number generator using a high-resolution clock
        std::mt19937 generator(std::chrono::high_resolution_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> distribution(0, 20000); // Example range for random numbers

        std::vector<int> data(10000); // Create a vector of 10,000 elements

        // Fill the vector with random numbers
        for (int i = 0; i < 10000; ++i) {
            data[i] = distribution(generator);
        }

        // Sort the vector for binary search
        std::sort(data.begin(), data.end());

        // ... (rest of the code for searching)
    }