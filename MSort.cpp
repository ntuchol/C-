#include <vector>
#include <algorithm> 

void merge(std::vector<int>& arr, int left, int mid, int right) {
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);        
        mergeSort(arr, mid + 1, right);  
        merge(arr, left, mid, right);     
    }
}

int main() {
    std::vector<int> myVector = {5, 2, 8, 1, 9, 4};
    mergeSort(myVector, 0, myVector.size() - 1);
    return 0;
}
