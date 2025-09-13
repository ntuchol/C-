#include <algorithm> 
#include <iostream>
#include <vector>

void heapSort(int arr[], int n) {
    std::vector<int> v(arr, arr + n);

    std::make_heap(v.begin(), v.end());

    std::sort_heap(v.begin(), v.end());

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
