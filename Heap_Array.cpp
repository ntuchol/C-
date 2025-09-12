#include <iostream>

int main() {
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;

    int* heapArray = new int[size];

    for (int i = 0; i < size; ++i) {
        heapArray[i] = i * 10;
        std::cout << heapArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] heapArray;
    heapArray = nullptr; 

    return 0;
}
