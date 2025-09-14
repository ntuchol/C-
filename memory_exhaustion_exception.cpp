#include <iostream>
#include <new> 
int main() {
    try {
        int* large_array = new int[1024 * 1024 * 1024]; 
        delete[] large_array; 
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }
    return 0;
}
