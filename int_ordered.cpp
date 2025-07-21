#include <vector>
    #include <algorithm>
    #include <iostream>

    int main() {
        std::vector<int> numbers = {5, 2, 8, 1, 9};
        std::sort(numbers.begin(), numbers.end()); // Sorts in ascending order
        for (int n : numbers) {
            std::cout << n << " "; // Output: 1 2 5 8 9
        }
        std::cout << std::endl;
        return 0;
    }