#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    auto start = high_resolution_clock::now();

    long long sum = 0;
    for (int i = 0; i < 1000000; ++i) {
        sum += i;
    }

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);

    std::cout << "Algorithm execution time: " << duration.count() << " milliseconds" << std::endl;

    return 0;
}
