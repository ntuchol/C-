#include <iostream>
#include <vector>
#include <algorithm> 

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++; 
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int quickSelect(std::vector<int>& arr, int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int pi = partition(arr, low, high);

        if (pi - low == k - 1) {
            return arr[pi];
        }

        if (pi - low > k - 1) {
            return quickSelect(arr, low, pi - 1, k);
        }
        else {
            return quickSelect(arr, pi + 1, high, k - (pi - low + 1));
        }
    }
    return -1; 
}

int main() {
    std::vector<int> data = {7, 10, 4, 3, 20, 15};
    int k = 3; 
    
    int n = data.size();
    int k_th_smallest = quickSelect(data, 0, n - 1, k);

    if (k_th_smallest != -1) {
        std::cout << "The " << k << "-th smallest element is: " << k_th_smallest << std::endl;
    } else {
        std::cout << "Invalid value of k." << std::endl;
    }

    k = 5;
    std::vector<int> data2 = {7, 10, 4, 3, 20, 15}; 
    k_th_smallest = quickSelect(data2, 0, data2.size() - 1, k);
    if (k_th_smallest != -1) {
        std::cout << "The " << k << "-th smallest element is: " << k_th_smallest << std::endl;
    } else {
        std::cout << "Invalid value of k." << std::endl;
    }

    return 0;
}
