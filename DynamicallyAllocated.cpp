#include <iostream>

int main() {
     int* singleIntPtr = new int; 

     *singleIntPtr = 42;
    std::cout << "Dynamically allocated single integer: " << *singleIntPtr << std::endl;

    delete singleIntPtr; 
    singleIntPtr = nullptr; 
    std::cout << "\nMemory for single integer deallocated." << std::endl;
    int* intArrayPtr = new int[5]; 

    std::cout << "\nDynamically allocated array of integers:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        intArrayPtr[i] = (i + 1) * 10; 
        std::cout << "intArrayPtr[" << i << "]: " << intArrayPtr[i] << std::endl;
    }

    delete[] intArrayPtr; 
    intArrayPtr = nullptr; 
    
    std::cout << "\nMemory for array of integers deallocated." << std::endl;

    return 0;
}
