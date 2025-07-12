#include <iostream>
#include <vector>

int main() {
    // Declare and initialize a vector of integers
    std::vector<int> numbers = {10, 20, 30};

    // Add elements to the end
    numbers.push_back(40);
    numbers.push_back(50);

    // Access and modify an element
    numbers[2] = 35; // Changes 30 to 35

    // Iterate and print elements
    std::cout << "Vector elements: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Get the size of the vector
    std::cout << "Vector size: " << numbers.size() << std::endl;

    // Remove the last element
    numbers.pop_back();

    std::cout << "Vector after pop_back: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}