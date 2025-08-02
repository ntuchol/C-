#include <random>
    #include <vector>
    #include <algorithm> // For std::sort
    #include <iostream>

    int main() {
        // 1. Create a random number engine
        std::default_random_engine generator; 

        // 2. Define a distribution (e.g., uniform_real_distribution for floats within a range)
        std::uniform_real_distribution<double> distribution(0.0, 100.0); // Range [0.0, 100.0)

        // 3. Generate random numbers and store them in a container (e.g., std::vector)
        std::vector<double> random_numbers;
        int num_elements = 10;
        for (int i = 0; i < num_elements; ++i) {
            random_numbers.push_back(distribution(generator));
        }

        // Print unsorted numbers
        std::cout << "Unsorted numbers:" << std::endl;
        for (double num : random_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        // ... (sorting step follows)
    }
