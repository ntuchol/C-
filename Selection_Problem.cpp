#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

// Function to partition the array around a pivot
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Quickselect function to find the k-th smallest element
int quickSelect(std::vector<int>& arr, int low, int high, int k) {
    // If k is within the array bounds
    if (k > 0 && k <= high - low + 1) {
        // Partition the array around a random element and get its position
        int pi = partition(arr, low, high);

        // If pivot is at the k-th position
        if (pi - low == k - 1) {
            return arr[pi];
        }

        // If pivot is greater than k-th position, recurse on the left subarray
        if (pi - low > k - 1) {
            return quickSelect(arr, low, pi - 1, k);
        }
        // If pivot is smaller than k-th position, recurse on the right subarray
        else {
            return quickSelect(arr, pi + 1, high, k - (pi - low + 1));
        }
    }
    // If k is out of bounds
    return -1; // Or throw an exception
}

int main() {
    std::vector<int> data = {7, 10, 4, 3, 20, 15};
    int k = 3; // Find the 3rd smallest element

    int n = data.size();
    int k_th_smallest = quickSelect(data, 0, n - 1, k);

    if (k_th_smallest != -1) {
        std::cout << "The " << k << "-th smallest element is: " << k_th_smallest << std::endl;
    } else {
        std::cout << "Invalid value of k." << std::endl;
    }

    // Example for a larger k
    k = 5;
    std::vector<int> data2 = {7, 10, 4, 3, 20, 15}; // Reset data for clarity
    k_th_smallest = quickSelect(data2, 0, data2.size() - 1, k);
    if (k_th_smallest != -1) {
        std::cout << "The " << k << "-th smallest element is: " << k_th_smallest << std::endl;
    } else {
        std::cout << "Invalid value of k." << std::endl;
    }

    return 0;
}
