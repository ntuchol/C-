#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

void bucketSort(std::vector<float>& arr) {
    int n = arr.size();

    // 1) Create n empty buckets
    std::vector<std::vector<float>> buckets(n);

    // 2) Put array elements in different buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i]; // Map element to bucket index
        buckets[bucketIndex].push_back(arr[i]);
    }

    // 3) Sort individual buckets using std::sort (e.g., Insertion Sort for small buckets)
    for (int i = 0; i < n; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float val : buckets[i]) {
            arr[index++] = val;
        }
    }
}

int main() {
    std::vector<float> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    bucketSort(arr);

    std::cout << "Sorted array: ";
    for (float val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}