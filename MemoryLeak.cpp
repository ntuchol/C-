#include <iostream>

void createLeak(int*& ptr) { 
    ptr = new int[10]; 
    }

int main() {
    int* myPointer = nullptr; 
    createLeak(myPointer); 
    std::cout << "Memory allocated in first call." << std::endl;

    for (int i = 0; i < 10; ++i) {
        myPointer[i] = i * 2;
    }

    delete[] myPointer; 
    myPointer = nullptr; 
    createLeak(myPointer);
    std::cout << "Memory allocated in second call." << std::endl;

    for (int i = 0; i < 10; ++i) {
        myPointer[i] = i * 3;
    }

    delete[] myPointer;
    myPointer = nullptr;

    return 0;
}
