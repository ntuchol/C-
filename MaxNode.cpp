#include <iostream>
#include <algorithm> // Required for std::max

    int main() {
        int a = 10;
        int b = 20;
        int max_val = std::max(a, b); // Finds the maximum of two values
        std::cout << "Max of a and b: " << max_val << std::endl;

        // Using with an initializer list (C++11 and later)
        int max_list_val = std::max({5, 12, 3, 8, 15});
        std::cout << "Max in list: " << max_list_val << std::endl;

        return 0;
    }