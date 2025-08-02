#include <algorithm> // For std::shuffle
#include <vector>    // For std::vector
#include <random>    // For std::mt19937 and std::random_device
#include <iostream>  // For printing (optional)

int main() {
    std::vector<int> data(1000000); // Large vector for demonstration
    for (int i = 0; i < data.size(); ++i) {
        data[i] = i;
    }

    // Initialize a high-quality random number generator
    // Seed with std::random_device for non-deterministic results
    std::mt19937 rng(std::random_device{}()); 

    // Perform the shuffle
    std::shuffle(data.begin(), data.end(), rng);

    // Optional: Print a few elements to verify
    // for (int i = 0; i < 10; ++i) {
    //     std::cout << data[i] << " ";
    // }
    // std::cout << std::endl;

    return 0;
}