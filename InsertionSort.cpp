#include <iostream>
#include <vector> // Using vector for dynamic array, can also use raw arrays

// Function to perform Insertion Sort
void insertionSort(std::vector<int>& arr) {
    int n = arr.size(); // Get the size of the array

    // Iterate from the second element (index 1) to the end of the array
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // Store the current element to be inserted
        int j = i - 1;    // Initialize j to the last element of the sorted part

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j = j - 1;           // Move to the previous element in the sorted part
        }
        arr[j + 1] = key; // Place the key in its correct sorted position
    }
}

// Function to print the array
void printArray(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6}; // Example array
    
    std::cout << "Original array: ";
    printArray(arr);

    insertionSort(arr); // Sort the array

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}