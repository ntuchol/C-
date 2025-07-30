#include <iostream>
#include <vector> // For using std::vector

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped; // Flag to optimize the sort

    for (int i = 0; i < n - 1; ++i) {
        swapped = false; // Reset swapped flag for each pass
        for (int j = 0; j < n - 1 - i; ++j) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                std::swap(arr[j], arr[j + 1]); 
                swapped = true; // Indicate a swap occurred
            }
        }
        // If no two elements were swapped in inner loop, array is sorted
        if (!swapped) {
            break; 
        }
    }
}

int main() {
    std::vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(myVector);

    std::cout << "Sorted array: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}