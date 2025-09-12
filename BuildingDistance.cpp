#include <iostream>
#include <vector>
#include <iterator>

    int main() {
        std::vector<int> v = {10, 20, 30, 40, 50};
        long dist = std::distance(v.begin(), v.end());
        std::cout << "Distance between iterators: " << dist << std::endl; 
        return 0;
    }
