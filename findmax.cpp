#include <iostream>
#include <vector>
#include <algorithm> // Required for std::max_element

int main() {
    std::vector<int> numbers = {5, 12, 3, 8, 20, 1};
    
    // Find the iterator to the maximum element
    auto max_it = std::max_element(numbers.begin(), numbers.end());
    
    // Dereference the iterator to get the value
    int max_val = *max_it;
    
    std::cout << "The maximum element in the vector is: " << max_val << std::endl;
    return 0;
}