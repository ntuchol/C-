#include <iostream>

// Function that causes a memory leak if not handled properly
void createLeak(int*& ptr) { // Pass by reference to modify the caller's pointer
    ptr = new int[10]; // Allocate memory for an array of 10 integers
    // No 'delete[] ptr;' here, leading to a leak if ptr is re-assigned
}

int main() {
    int* myPointer = nullptr; // Initialize pointer to nullptr

    // First call: Allocate memory
    createLeak(myPointer); 
    std::cout << "Memory allocated in first call." << std::endl;

    // Simulate some work with myPointer
    for (int i = 0; i < 10; ++i) {
        myPointer[i] = i * 2;
    }

    // To prevent leak on subsequent calls or before re-assignment:
    // Deallocate memory before calling createLeak again or before exiting main
    delete[] myPointer; 
    myPointer = nullptr; // Set to nullptr after deletion

    // Second call: Allocate new memory
    createLeak(myPointer);
    std::cout << "Memory allocated in second call." << std::endl;

    // Simulate more work
    for (int i = 0; i < 10; ++i) {
        myPointer[i] = i * 3;
    }

    // Final deallocation before program ends
    delete[] myPointer;
    myPointer = nullptr;

    return 0;
}