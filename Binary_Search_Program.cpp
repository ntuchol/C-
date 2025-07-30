#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort if the array is not already sorted

// Function to perform binary search
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to prevent potential overflow

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found, return its index
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    std::vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    // Ensure the vector is sorted for binary search to work correctly
    // std::sort(numbers.begin(), numbers.end()); 

    int target1 = 23;
    int target2 = 10;

    int result1 = binarySearch(numbers, target1);
    if (result1 != -1) {
        std::cout << "Element " << target1 << " found at index " << result1 << std::endl;
    } else {
        std::cout << "Element " << target1 << " not found in the array." << std::endl;
    }

    int result2 = binarySearch(numbers, target2);
    if (result2 != -1) {
        std::cout << "Element " << target2 << " found at index " << result2 << std::endl;
    } else {
        std::cout << "Element " << target2 << " not found in the array." << std::endl;
    }

    return 0;
}