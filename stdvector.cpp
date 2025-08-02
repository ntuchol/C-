#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers; // Declare an empty vector of integers

    numbers.push_back(10); // Add elements
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Size of vector: " << numbers.size() << std::endl;

    numbers.insert(numbers.begin() + 1, 15); // Insert 15 at index 1

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    numbers.pop_back(); // Remove the last element

    return 0;
}
