#include <iostream>
    #include <vector>
    #include <iterator> // Required for std::distance

    int main() {
        std::vector<int> v = {10, 20, 30, 40, 50};
        // Calculate distance between begin() and end() iterators
        long dist = std::distance(v.begin(), v.end());
        std::cout << "Distance between iterators: " << dist << std::endl; // Output: 5
        return 0;
    }