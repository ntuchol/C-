#include <iostream>
#include <algorithm> 

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        std::swap(arr[i], arr[min_idx]);
    }
}

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
