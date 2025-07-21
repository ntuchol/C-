#include <random>
#include <iostream>

int main() {
    // 1. Create a random number engine (e.g., Mersenne Twister)
    std::mt19937 gen(std::random_device{}()); 

    // 2. Create a uniform_int_distribution for the desired range [1, 10]
    std::uniform_int_distribution<> distrib(1, 10); 

    // 3. Generate and print 5 random integers
    for (int i = 0; i < 5; ++i) {
        std::cout << distrib(gen) << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <random>
#include <iostream>

int main() {
    // 1. Create a random number engine
    std::mt19937 gen(std::random_device{}());

    // 2. Create a uniform_real_distribution for the desired range [0.0, 1.0)
    std::uniform_real_distribution<> distrib(0.0, 1.0); 

    // 3. Generate and print 5 random floating-point numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << distrib(gen) << " ";
    }
    std::cout << std::endl;

    return 0;
}