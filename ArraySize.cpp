#include <iostream>

int main() {
    const int ARRAY_SIZE = 10; 

    int* heapArray = new int[ARRAY_SIZE]; 

    std::cout << "Initializing and printing heap array elements:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        heapArray[i] = (i + 1) * 10; 
        std::cout << "heapArray[" << i << "] = " << heapArray[i] << std::endl;
    }

    delete[] heapArray; 
    heapArray = nullptr; 
    return 0;
}
