#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
#include <numeric>   // For std::max_element

void bucketSort(std::vector<double>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    // Find the maximum element to determine the range
    double max_val = *std::max_element(arr.begin(), arr.end());

    // Create buckets
    std::vector<std::vector<double>> buckets(n);

    // Distribute elements into buckets
    for (double val : arr) {
        int bucket_index = (int)(val * n / (max_val + 1));
        buckets[bucket_index].push_back(val);
    }

    // Sort individual buckets and concatenate
    int index = 0;
    for (int i = 0; i < n; ++i) {
        std::sort(buckets[i].begin(), buckets[i].end()); // Sort each bucket
        for (double val : buckets[i]) {
            arr[index++] = val;
        }
    }
}

int main() {
    std::vector<double> arr = {0.897, 0.565, 0.656, 0.123, 0.665, 0.343};
    bucketSort(arr);

    std::cout << "Sorted array: ";
    for (double val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}