#include <iostream>
#include <ctime>

int main() {
    clock_t start = clock();

    // Perform some operations
    for (int i = 0; i < 1000000; ++i) {
        // ...
    }

    clock_t end = clock();
    double cpu_time_seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "CPU time used: " << cpu_time_seconds << " seconds" << std::endl;
    return 0;
}

#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    // Perform some operations
    for (int i = 0; i < 1000000; ++i) {
        // ...
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Elapsed time: " << duration.count() << " microseconds" << std::endl;
    return 0;
}