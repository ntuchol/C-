#include <iostream> 
#include <vector>   

int main() {
    int arraySize; 
    std::cout << "Enter the desired size of the integer array: ";
    std::cin >> arraySize;

    if (arraySize <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1; 
    }

    std::vector<int> dynamicArray(arraySize);

    std::cout << "Enter " << arraySize << " integer values for the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }

    std::cout << "\nElements in the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    return 0; 
}
