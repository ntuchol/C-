#include <iostream>
#include <vector>
#include <cmath> 

template <typename T>
void generatePowerSet(const std::vector<T>& set) {
    int n = set.size();
    int numSubsets = std::pow(2, n);

    for (int i = 0; i < numSubsets; ++i) {
        std::cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                std::cout << set[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}
