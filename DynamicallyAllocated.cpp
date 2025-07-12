#include <iostream>

int main() {
    // Dynamically allocate memory for a single integer
    // 'new int' allocates enough memory to hold one integer
    int* singleIntPtr = new int; 

    // Assign a value to the dynamically allocated integer
    *singleIntPtr = 42;
    std::cout << "Dynamically allocated single integer: " << *singleIntPtr << std::endl;

    // Deallocate the memory for the single integer
    // 'delete singleIntPtr' releases the memory back to the heap
    delete singleIntPtr; 
    singleIntPtr = nullptr; // Set pointer to nullptr to avoid dangling pointer issues

    std::cout << "\nMemory for single integer deallocated." << std::endl;

    // Dynamically allocate memory for an array of 5 integers
    // 'new int[5]' allocates enough memory to hold 5 integers
    int* intArrayPtr = new int[5]; 

    // Initialize and print the elements of the dynamically allocated array
    std::cout << "\nDynamically allocated array of integers:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        intArrayPtr[i] = (i + 1) * 10; // Assign values
        std::cout << "intArrayPtr[" << i << "]: " << intArrayPtr[i] << std::endl;
    }

    // Deallocate the memory for the array of integers
    // 'delete[] intArrayPtr' releases the memory for the entire array
    delete[] intArrayPtr; 
    intArrayPtr = nullptr; // Set pointer to nullptr

    std::cout << "\nMemory for array of integers deallocated." << std::endl;

    return 0;
}
Ex