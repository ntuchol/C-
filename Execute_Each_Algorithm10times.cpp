#include <iostream> 
#include <chrono>   

long long sum_algorithm(int N) {
    long long sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    const int NUM_EXECUTIONS = 10; 
    int N_value = 1000;          

    for (int i = 0; i < NUM_EXECUTIONS; ++i) {
        auto start_time = std::chrono::high_resolution_clock::now();

        long long result = sum_algorithm(N_value);

        auto end_time = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end_time - start_time;
        std::cout << "Execution " << i + 1 << ": Result = " << result 
                  << ", Time taken = " << duration.count() << " seconds" << std::endl;
    }

    return 0;
}
