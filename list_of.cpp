#include <iostream>
#include <list>
#include <string>

int main() {
    // Create a list of integers
    std::list<int> numbers = {10, 20, 30, 40, 50};

    // Add elements to the front and back
    numbers.push_front(5);
    numbers.push_back(55);

    // Print the list elements
    std::cout << "Numbers in the list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element
    numbers.remove(30); // Removes all occurrences of 30

    // Print the list after removal
    std::cout << "Numbers after removing 30: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}