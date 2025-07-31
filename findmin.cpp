#include <iostream>
#include <vector>
#include <algorithm> // For std::min_element

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};
    
    // Find the iterator to the minimum element
    auto min_it = std::min_element(numbers.begin(), numbers.end());
    
    // Dereference the iterator to get the value
    if (min_it != numbers.end()) { // Check if the vector is not empty
        std::cout << "Minimum element: " << *min_it << std::endl;
    } else {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}