#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};

    // Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: Sorted numbers: 1 2 5 8 9 

    return 0;
}