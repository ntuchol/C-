#include <iostream>
#include <vector>
#include <algorithm> // Required for std::adjacent_find

int main() {
    std::vector<int> numbers = {1, 2, 3, 3, 5, 6, 6, 7};

    // Find the first pair of adjacent equal elements
    auto it1 = std::adjacent_find(numbers.begin(), numbers.end());
    if (it1 != numbers.end()) {
        std::cout << "First adjacent equal pair found: " << *it1 << ", " << *(it1 + 1) << std::endl;
    } else {
        std::cout << "No adjacent equal pair found." << std::endl;
    }

    // Find the first pair of adjacent elements where the second is greater than the first
    auto it2 = std::adjacent_find(numbers.begin(), numbers.end(), [](int a, int b) {
        return b > a;
    });
    if (it2 != numbers.end()) {
        std::cout << "First adjacent pair where second > first: " << *it2 << ", " << *(it2 + 1) << std::endl;
    } else {
        std::cout << "No such adjacent pair found." << std::endl;
    }

    return 0;
}