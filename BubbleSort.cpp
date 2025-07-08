#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

// Function to perform Bubble Sort on a vector
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped; // Flag to optimize the sort

    // Outer loop for passes
    for (int i = 0; i < n - 1; ++i) {
        swapped = false; // Reset swapped flag for each pass

        // Inner loop for comparisons and swaps
        // The last 'i' elements are already in place after 'i' passes
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Indicate a swap occurred
            }
        }

        // If no two elements were swapped in the inner loop,
        // the array is already sorted, so break early
        if (!swapped) {
            break;
        }
    }
}

// Function to print the elements of a vector
void printArray(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    printArray(myVector);

    bubbleSort(myVector);

    std::cout << "Sorted array: ";
    printArray(myVector);

    return 0;
}