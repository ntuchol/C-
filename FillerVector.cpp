std::vector<int> v(10, 0); // Creates a vector of 10 integers, all initialized to 0
#include <algorithm> // For std::fill
#include <vector>

    std::vector<int> v = {1, 2, 3, 4, 5};
    std::fill(v.begin(), v.end(), 0); // Fills v with 0s: {0, 0, 0, 0, 0}
    std::vector<int> v;
    v.assign(5, 100); // Resizes v to 5 elements, all set to 100
    std::vector<int> v = {1, 2, 3};
    v.resize(5, 0); // Resizes to 5 elements. New elements (at index 3 and 4) are 0: {1, 2, 3, 0, 0}
    std::vector<int> source = {1, 2, 3};
    std::vector<int> destination(source.begin(), source.end()); // Copies elements from source
    std::vector<int> source = {1, 2, 3};
    std::vector<int> destination;
    destination.assign(source.begin(), source.end()); // Copies elements from source
