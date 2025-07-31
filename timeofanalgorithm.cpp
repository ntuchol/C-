#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    // Record start time
    auto start = high_resolution_clock::now();

    // Simulate an algorithm (e.g., a loop)
    long long sum = 0;
    for (int i = 0; i < 1000000; ++i) {
        sum += i;
    }

    // Record end time
    auto end = high_resolution_clock::now();

    // Calculate duration in milliseconds
    auto duration = duration_cast<milliseconds>(end - start);

    // Print the elapsed time
    std::cout << "Algorithm execution time: " << duration.count() << " milliseconds" << std::endl;

    return 0;
}