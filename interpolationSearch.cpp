    pos = low + (((double)(key - arr[low]) * (high - low)) / (arr[high] - arr[low]));
int interpolationSearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        // Handle division by zero or equal values at ends
        if (arr[high] == arr[low]) {
            if (arr[low] == key) return low; // Key found at low/high
            return -1; // Key not found
        }

        // Calculate probe position
        int pos = low + (((double)(key - arr[low]) * (high - low)) / (arr[high] - arr[low]));

        if (arr[pos] == key) {
            return pos; // Key found
        } else if (arr[pos] < key) {
            low = pos + 1; // Search in the right sub-array
        } else {
            high = pos - 1; // Search in the left sub-array
        }
    }
    return -1; // Key not found
}