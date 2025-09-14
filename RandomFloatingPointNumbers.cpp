#include <random>
#include <vector>
#include <algorithm> 
#include <iostream>

    int main() {
        std::default_random_engine generator; 

        std::uniform_real_distribution<double> distribution(0.0, 100.0); // Range [0.0, 100.0)

        std::vector<double> random_numbers;
        int num_elements = 10;
        for (int i = 0; i < num_elements; ++i) {
            random_numbers.push_back(distribution(generator));
        }

        std::cout << "Unsorted numbers:" << std::endl;
        for (double num : random_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
