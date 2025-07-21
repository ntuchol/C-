#include <iostream>

int main() {
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    // Allocate an array of integers on the heap
    int* heapArray = new int[size];

    // Initialize and access elements
    for (int i = 0; i < size; ++i) {
        heapArray[i] = i * 10;
        std::cout << heapArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory when no longer needed
    delete[] heapArray;
    heapArray = nullptr; // Good practice to set pointer to nullptr after deletion

    return 0;
}