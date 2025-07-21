#include <iostream>
#include <algorithm> // Required for std::swap

void cocktailSort(int arr[], int n) {
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false; // Reset flag for each pass

        // Forward pass (like Bubble Sort)
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // If no swaps occurred in the forward pass, the array is sorted
        if (!swapped) {
            break;
        }

        swapped = false; // Reset flag for the backward pass
        end--; // Decrease the end boundary as the largest element is now in place

        // Backward pass
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        start++; // Increase the start boundary as the smallest element is now in place
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    cocktailSort(arr, n);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}