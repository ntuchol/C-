#include <iostream>
#include <vector> 

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped; 
    
    for (int i = 0; i < n - 1; ++i) {
        swapped = false; 
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); 
                swapped = true; 
            }
        }
        if (!swapped) {
            break; 
        }
    }
}

int main() {
    std::vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(myVector);

    std::cout << "Sorted array: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
