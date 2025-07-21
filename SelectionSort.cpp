#include <iostream>
#include <algorithm> // For std::swap

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Assume the current element is the minimum
        int min_idx = i;

        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        std::swap(arr[i], arr[min_idx]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int n = sizeof(data) / sizeof(data[0]);

    std::cout << "Original array: ";
    printArray(data, n);

    selectionSort(data, n);

    std::cout << "Sorted array: ";
    printArray(data, n);

    return 0;
}