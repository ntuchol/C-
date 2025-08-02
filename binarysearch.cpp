#include <algorithm> // Required for std::binary_search
    #include <vector>
    #include <iostream>

    int main() {
        std::vector<int> data = {1, 3, 5, 7, 9, 11};
        int target = 7;

        if (std::binary_search(data.begin(), data.end(), target)) {
            std::cout << target << " found in the vector." << std::endl;
        } else {
            std::cout << target << " not found in the vector." << std::endl;
        }
        return 0;
    }