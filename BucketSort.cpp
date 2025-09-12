#include <iostream>
#include <vector>
#include <algorithm> 

void bucketSort(std::vector<float>& arr) {
    int n = arr.size();

    std::vector<std::vector<float>> buckets(n);

    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i]; 
        buckets[bucketIndex].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

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
