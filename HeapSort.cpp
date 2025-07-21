#include <algorithm> // For make_heap, pop_heap, sort_heap
#include <iostream>
#include <vector>

void heapSort(int arr[], int n) {
    // Convert array to vector for easier use with STL heap functions
    std::vector<int> v(arr, arr + n);

    // Build a max-heap from the vector
    std::make_heap(v.begin(), v.end());

    // Sort the heap (extracts elements one by one and places them in sorted order)
    std::sort_heap(v.begin(), v.end());

    // Copy the sorted elements back to the original array
    std::copy(v.begin(), v.end(), arr);
}

int main() {
    int arr[] = {60, 20, 40, 70, 30, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    std::cout << "Sorted array is: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}