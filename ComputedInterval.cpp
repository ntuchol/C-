#include <chrono>
#include <iostream>

int main() {
    // Record the start time
    auto start = std::chrono::high_resolution_clock::now();

    // Perform some operations
    for (int i = 0; i < 1000000; ++i) {
        // ... some computation ...
    }

    // Record the end time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // Output the computed interval
    std::cout << "Time taken: " << duration.count() << " microseconds" << std::endl;

    return 0;
}