int pos = low + ((double)(high - low) / (A[high] - A[low])) * (x - A[low]);

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]);

        if (arr[pos] == x) {
            return pos; 
        }
        if (arr[pos] < x) {
            low = pos + 1; 
        } else {
            high = pos - 1; 
        }
    }
    return -1; 
}
