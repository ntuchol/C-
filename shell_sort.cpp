#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

void shellSort(std::vector<int>& arr) {
    int n = arr.size();

    // Start with a large gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform a gapped insertion sort for the current gap size
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            // Shift elements that are larger than temp to the right
            // within the current gapped sublist
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            // Place temp in its correct position within the gapped sublist
            arr[j] = temp;
        }
    }
}

void printArray(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {9, 8, 3, 7, 5, 6, 4, 1};

    std::cout << "Original array: ";
    printArray(data);

    shellSort(data);

    std::cout << "Sorted array: ";
    printArray(data);

    return 0;
}