#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return the index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    int search_target = 30;
    int index = linearSearch(data, search_target);

    if (index != -1) {
        std::cout << "Target " << search_target << " found at index: " << index << std::endl;
    } else {
        std::cout << "Target " << search_target << " not found." << std::endl;
    }

    return 0;
}