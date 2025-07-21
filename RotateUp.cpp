#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2; // Rotate by 2 positions to the left

    // Perform the left rotation
    std::rotate(arr.begin(), arr.begin() + d, arr.end());

    // Print the rotated vector
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl; // Output: 3 4 5 6 1 2 

    return 0;
}