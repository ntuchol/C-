#include <iostream>
#include <random>
#include <chrono> 

int main() {
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(0, 36); 
    
    int spinResult = dist(rng);

    std::cout << "The ball landed on: " << spinResult << std::endl;

    if (spinResult == 0) {
        std::cout << "Color: Green" << std::endl;
    } else if (spinResult % 2 == 0) {
        std::cout << "Color: Black (for even numbers, assuming standard layout)" << std::endl;
    } else {
        std::cout << "Color: Red (for odd numbers, assuming standard layout)" << std::endl;
    }

    return 0;
}
