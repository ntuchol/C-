#include <iostream> // For std::cout
#include <cstdlib>  // For rand() and RAND_MAX

int main() {
    int randomNumber = rand();
    std::cout << "Random number: " << randomNumber << std::endl;
    return 0;
}