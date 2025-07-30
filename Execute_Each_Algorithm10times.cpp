#include <iostream> // For input/output operations
#include <chrono>   // For measuring execution time (optional but recommended for analysis)

// Define your algorithm function here
// Example: A simple algorithm that sums numbers up to N
long long sum_algorithm(int N) {
    long long sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    const int NUM_EXECUTIONS = 10; // Number of times to execute the algorithm
    int N_value = 1000;          // Example input size for the algorithm

    for (int i = 0; i < NUM_EXECUTIONS; ++i) {
        // Optional: Start time measurement
        auto start_time = std::chrono::high_resolution_clock::now();

        // Call your algorithm function
        long long result = sum_algorithm(N_value);

        // Optional: End time measurement and print duration
        auto end_time = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end_time - start_time;
        std::cout << "Execution " << i + 1 << ": Result = " << result 
                  << ", Time taken = " << duration.count() << " seconds" << std::endl;
    }

    return 0;
}