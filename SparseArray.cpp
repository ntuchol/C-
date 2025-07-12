#include <map>
#include <iostream>

template <typename T>
class SparseArray {
private:
    std::map<int, T> data; // Stores non-zero elements: index (key) and value (T)
    T defaultValue;       // The default value for elements not explicitly stored

public:
    // Constructor: Initialize with a default value for sparse elements
    SparseArray(T defaultVal = T()) : defaultValue(defaultVal) {}

    // Operator[]: Provides array-like access to elements
    T& operator[](int index) {
        // If the index is not in the map (i.e., it's a default value), insert the default value
        if (data.find(index) == data.end()) {
            data[index] = defaultValue;
        }
        return data[index];
    }

    // Get an element without modifying the array (const version)
    const T& operator[](int index) const {
        // If the index exists, return its value; otherwise, return the default value
        auto it = data.find(index);
        if (it != data.end()) {
            return it->second;
        }
        return defaultValue;
    }

    // Explicitly set a value at a given index
    void set(int index, T value) {
        if (value == defaultValue) {
            // If the new value is the default value, remove it from the map to maintain sparsity
            data.erase(index);
        } else {
            data[index] = value;
        }
    }

    // Check if an element is explicitly stored (not the default value)
    bool isStored(int index) const {
        return data.count(index) > 0;
    }

    // Get the number of explicitly stored (non-default) elements
    size_t size() const {
        return data.size();
    }

    // Clear the sparse array (remove all stored elements)
    void clear() {
        data.clear();
    }

    // Iterate over the sparse array
    void print() const {
        for (const auto& pair : data) {
            std::cout << "Index: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }
};

int main() {
    // Create a sparse array of integers with a default value of 0
    SparseArray<int> sparseArr(0); 

    // Set some values
    sparseArr[5] = 10;
    sparseArr[100] = 20;
    sparseArr[2] = 5;

    // Access elements
    std::cout << "Value at index 5: " << sparseArr[5] << std::endl;      // Output: 10
    std::cout << "Value at index 0: " << sparseArr[0] << std::endl;      // Output: 0 (default value)
    std::cout << "Value at index 100: " << sparseArr[100] << std::endl;  // Output: 20

    // Set an element to the default value (it will be removed)
    sparseArr.set(2, 0); 
    std::cout << "Value at index 2 (after setting to default): " << sparseArr[2] << std::endl; // Output: 0

    // Print all explicitly stored elements
    std::cout << "\nStored elements:" << std::endl;
    sparseArr.print();

    // Check if an element is stored
    std::cout << "Is index 5 stored? " << (sparseArr.isStored(5) ? "Yes" : "No") << std::endl; // Output: Yes
    std::cout << "Is index 2 stored? " << (sparseArr.isStored(2) ? "Yes" : "No") << std::endl; // Output: No

    return 0;
}