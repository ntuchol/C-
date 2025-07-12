#include <iostream> // Required for input/output operations
#include <vector>   // Recommended for dynamic arrays in modern C++

int main() {
    int arraySize; // Declare an integer variable to store the user-specified size

    // Prompt the user to enter the size of the array
    std::cout << "Enter the desired size of the integer array: ";
    // Read the user's input and store it in arraySize
    std::cin >> arraySize;

    // Input validation: Ensure the size is positive
    if (arraySize <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1; // Indicate an error
    }

    // Dynamically allocate an array using a std::vector for safety and convenience
    std::vector<int> dynamicArray(arraySize);

    // Optional: Prompt the user to enter elements for the array
    std::cout << "Enter " << arraySize << " integer values for the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }

    // Optional: Display the elements of the array
    std::cout << "\nElements in the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Indicate successful execution
}