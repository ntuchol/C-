#include <iostream>
#include <vector>
#include <algorithm> 

void shellSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
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
