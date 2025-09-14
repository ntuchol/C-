#include <iostream>
#include <vector>
#include <algorithm> 

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};
    std::cout << "Original array: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    selectionSort(data);

    std::cout << "Sorted array: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
