void fill(iterator first, iterator last, const T& value);
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> numbers(5); // Create a vector of 5 integers

    // Fill the entire vector with the value 10
    std::fill(numbers.begin(), numbers.end(), 10);

    for (int num : numbers) {
        std::cout << num << " "; // Output: 10 10 10 10 10
    }
    std::cout << std::endl;

    // Fill a specific range within the vector with the value 5
    std::fill(numbers.begin() + 1, numbers.begin() + 4, 5);

    for (int num : numbers) {
        std::cout << num << " "; // Output: 10 5 5 5 10
    }
    std::cout << std::endl;

    return 0;
}