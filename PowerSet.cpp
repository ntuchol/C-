#include <iostream>
#include <vector>
#include <cmath> // For pow()

template <typename T>
void generatePowerSet(const std::vector<T>& set) {
    int n = set.size();
    // Total number of subsets is 2^n
    int numSubsets = std::pow(2, n);

    for (int i = 0; i < numSubsets; ++i) {
        std::cout << "{ ";
        for (int j = 0; j < n; ++j) {
            // Check if the j-th bit is set in i
            if ((i >> j) & 1) {
                std::cout << set[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}