#include <iostream>
#include <vector>

int recursiveLinearSearch(const std::vector<int>& arr, int target, int index) {
    // Base Case 1: Element not found (index out of bounds)
    if (index >= arr.size()) {
        return -1;
    }
    // Base Case 2: Element found
    if (arr[index] == target) {
        return index;
    }
    // Recursive Step: Search in the rest of the array
    return recursiveLinearSearch(arr, target, index + 1);
}

int main() {
    std::vector<int> myVector = {10, 20, 30, 40, 50};
    int target1 = 30;
    int target2 = 60;

    int result1 = recursiveLinearSearch(myVector, target1, 0);
    if (result1 != -1) {
        std::cout << "Element " << target1 << " found at index: " << result1 << std::endl;
    } else {
        std::cout << "Element " << target1 << " not found." << std::endl;
    }

    int result2 = recursiveLinearSearch(myVector, target2, 0);
    if (result2 != -1) {
        std::cout << "Element " << target2 << " found at index: " << result2 << std::endl;
    } else {
        std::cout << "Element " << target2 << " not found." << std::endl;
    }

    return 0;
}