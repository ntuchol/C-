#include <iostream>
#include <vector> // Using vector for dynamic array

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped; // Flag to optimize: stop if no swaps occurred in a pass

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then array is sorted
        if (!swapped) {
            break;
        }
    }
}

void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    printArray(data);

    bubbleSort(data);

    std::cout << "Sorted array: ";
    printArray(data);

    return 0;
}