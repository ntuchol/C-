void* bsearch(const void* key, const void* base, size_t num, size_t size, int (*compare)(const void*, const void*));


#include <iostream>
#include <cstdlib> 
#include <algorithm> 

int compareInts(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int key = 40;

     std::sort(std::begin(arr), std::end(arr));

    int* result = (int*)bsearch(&key, arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), compareInts);

    if (result != NULL) {
        std::cout << "Element " << key << " found at address: " << result << std::endl;
        std::cout << "Value found: " << *result << std::endl;
    } else {
        std::cout << "Element " << key << " not found." << std::endl;
    }

    key = 70; 
    result = (int*)bsearch(&key, arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), compareInts);

    if (result != NULL) {
        std::cout << "Element " << key << " found at address: " << result << std::endl;
        std::cout << "Value found: " << *result << std::endl;
    } else {
        std::cout << "Element " << key << " not found." << std::endl;
    }

    return 0;
}
