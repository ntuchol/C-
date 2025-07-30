#include <iostream>
#include <vector>

void shellSort(std::vector<int>& arr) {
    int n = arr.size();

    // Start with a large gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Do a gapped insertion sort for this gap size
        for (int i = gap; i < n; i += 1) {
            // Add arr[i] to the elements that have been gap sorted
            // Save arr[i] in temp and make a hole at position i
            int temp = arr[i];

            // Shift earlier gap-sorted elements up until
            // the correct location for arr[i] is found
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // Put temp (the original arr[i]) in its correct location
            arr[j] = temp;
        }
    }
}

// Utility function to print the array
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