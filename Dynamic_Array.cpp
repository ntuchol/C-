int* dynamicArray = new int[array_size]; // Allocate memory
    // ... use dynamicArray ...
    delete[] dynamicArray; // Deallocate memory
#include <vector>
    // ...
    std::vector<int> dynamicVector; // Create an empty vector
    dynamicVector.push_back(10);    // Add elements dynamically
    dynamicVector.resize(new_size); // Change size