#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

void bucketSort(float arr[], int n) {
    // 1. Create n empty buckets
    std::vector<std::vector<float>> buckets(n);

    // 2. Insert elements into buckets
    // The bucket index is determined by multiplying the element by n
    // and taking the integer part. This assumes elements are in [0.0, 1.0).
    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i];
        buckets[bucketIndex].push_back(arr[i]);
    }

    // 3. Sort individual buckets
    for (int i = 0; i < n; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    // 4. Concatenate all sorted buckets
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float element : buckets[i]) {
            arr[index++] = element;
        }
    }
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.123, 0.665, 0.343};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bucketSort(arr, n);

    std::cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}