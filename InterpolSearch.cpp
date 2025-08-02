int pos = low + ((double)(high - low) / (A[high] - A[low])) * (x - A[low]);

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {
        // Calculate the estimated position
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]);

        if (arr[pos] == x) {
            return pos; // Target found
        }
        if (arr[pos] < x) {
            low = pos + 1; // Search in the upper part
        } else {
            high = pos - 1; // Search in the lower part
        }
    }
    return -1; // Target not found
}