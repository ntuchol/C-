    pos = low + (((double)(key - arr[low]) * (high - low)) / (arr[high] - arr[low]));
int interpolationSearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        if (arr[high] == arr[low]) {
            if (arr[low] == key) return low; 
            return -1; 
        }

        int pos = low + (((double)(key - arr[low]) * (high - low)) / (arr[high] - arr[low]));

        if (arr[pos] == key) {
            return pos; 
        } else if (arr[pos] < key) {
            low = pos + 1; 
        } else {
            high = pos - 1; 
        }
    }
    return -1; 
}
