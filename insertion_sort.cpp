#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // Element to be inserted
        int j = i - 1;    // Index of the last element in the sorted part

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insert the key at its correct position
    }
}

int main() {
    std::vector<int> myVector = {12, 11, 13, 5, 6};
    std::cout << "Original array: ";
    for (int x : myVector) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    insertionSort(myVector);

    std::cout << "Sorted array: ";
    for (int x : myVector) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}