#include <cstdlib> // For rand() and RAND_MAX
    #include <iostream>

    int main() {
        // Generate a random double between 0.0 and 1.0
        double random_double = static_cast<double>(rand()) / RAND_MAX;
        std::cout << "Random double: " << random_double << std::endl;
        return 0;
    }