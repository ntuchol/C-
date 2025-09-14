#include <iostream>
    #include <vector>
    #include <algorithm>
    #include <random>    
    #include <chrono>    

    int main() {
        std::mt19937 generator(std::chrono::high_resolution_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> distribution(0, 20000); 

        std::vector<int> data(10000);
        for (int i = 0; i < 10000; ++i) {
            data[i] = distribution(generator);
        }

        std::sort(data.begin(), data.end());

    }
