#include <iostream>
#include <new> // For std::bad_alloc

int main() {
    try {
        // Attempt to allocate a large array
        int* large_array = new int[1024 * 1024 * 1024]; // Example of a potentially problematic allocation
        // ... use large_array ...
        delete[] large_array; // Don't forget to deallocate
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        // Handle the error gracefully, e.g., log, exit, or try a smaller allocation
    }
    return 0;
}