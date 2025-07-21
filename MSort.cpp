#include <vector>
#include <algorithm> // For std::inplace_merge if desired for merging in-place

// Function to merge two sorted sub-arrays
void merge(std::vector<int>& arr, int left, int mid, int right) {
    // ... implementation for merging ...
}

// Recursive function for Merge Sort
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);        // Sort left half
        mergeSort(arr, mid + 1, right);   // Sort right half
        merge(arr, left, mid, right);     // Merge the sorted halves
    }
}

// How to use it:
int main() {
    std::vector<int> myVector = {5, 2, 8, 1, 9, 4};
    mergeSort(myVector, 0, myVector.size() - 1);
    // myVector is now sorted
    return 0;
}