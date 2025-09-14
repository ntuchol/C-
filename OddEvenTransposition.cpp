#include <iostream>
#include <vector>
#include <algorithm> 
void oddEvenSort(std::vector<int>& arr) {
    int n = arr.size();
    bool sortedFlag = false;

    while (!sortedFlag) {
        sortedFlag = true;

        for (int i = 1; i <= n - 2; i += 2) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                sortedFlag = false;
            }
        }

        for (int i = 0; i <= n - 2; i += 2) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                sortedFlag = false;
            }
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
    std::vector<int> arr = {5, 2, 8, 1, 9, 4, 7, 3, 6};
    std::cout << "Original array: ";
    printArray(arr);

    oddEvenSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
