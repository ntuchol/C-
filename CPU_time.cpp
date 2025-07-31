    #include <ctime>

    std::clock_t start = std::clock();
    std::clock_t end = std::clock();
    double cpu_time_used = static_cast<double>(end - start) / CLOCKS_PER_SEC;
#include <iostream>

void intensive_computation() {
    long long sum = 0;
    for (int i = 0; i < 100000000; ++i) {
        sum += i;
    }
}

int main() {
    std::clock_t start = std::clock();

    intensive_computation(); // The code to measure

    std::clock_t end = std::clock();

    double cpu_time_used = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "CPU time used: " << cpu_time_used << " seconds" << std::endl;

    return 0;
}