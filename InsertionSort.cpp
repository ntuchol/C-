void insertionSort(int arr[], int start, int end) {
    for (int i = start + 1; i <= end; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void segmentedInsertionSort(int arr[], int size, int segmentSize) {
    for (int i = 0; i < size; i += segmentSize) {
        int segmentEnd = std::min(i + segmentSize - 1, size - 1);
        insertionSort(arr, i, segmentEnd);
    }
}  