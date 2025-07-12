#include <iostream>

int main() {
    // Declare a constant for the array size
    const int ARRAY_SIZE = 10; 

    // Allocate an array of integers on the heap using 'new'
    // 'new int[ARRAY_SIZE]' allocates memory for ARRAY_SIZE integers
    // and returns a pointer to the first element.
    int* heapArray = new int[ARRAY_SIZE]; 

    // Initialize and print elements of the allocated array
    std::cout << "Initializing and printing heap array elements:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        heapArray[i] = (i + 1) * 10; // Assign values
        std::cout << "heapArray[" << i << "] = " << heapArray[i] << std::endl;
    }

    // Deallocate the memory on the heap using 'delete[]'
    // This is crucial to prevent memory leaks.
    delete[] heapArray; 
    heapArray = nullptr; // Set the pointer to nullptr after deallocation (good practice)

    return 0;
}