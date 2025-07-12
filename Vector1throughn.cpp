#include <iostream>
#include <vector>
#include <numeric> // Required for std::iota

int main() {
    const int n = 10; // Define the upper limit for the sequence

    // Create a vector of size n
    std::vector<int> numbers(n);

    // Fill the vector with values from 1 to n
    std::iota(numbers.begin(), numbers.end(), 1);

    // Print the elements to verify
    std::cout << "Vector elements (1 to " << n << "): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}