#include <iostream>
#include <vector>
#include <algorithm> // Required for std::binary_search

int main() {
    std::vector<int> arr = {10, 20, 30, 40, 50}; // Must be sorted
    int target = 30;

    // Using std::binary_search
    if (std::binary_search(arr.begin(), arr.end(), target)) {
        std::cout << "Element " << target << " found in the array." << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    // Manual implementation (for understanding)
    int manual_target = 40;
    int low = 0;
    int high = arr.size() - 1;
    int found_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow for large low/high values

        if (arr[mid] == manual_target) {
            found_index = mid;
            break;
        } else if (arr[mid] < manual_target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        std::cout << "Element " << manual_target << " found at index " << found_index << " (manual search)." << std::endl;
    } else {
        std::cout << "Element " << manual_target << " not found (manual search)." << std::endl;
    }

    return 0;
}