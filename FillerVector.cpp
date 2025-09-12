std::vector<int> v(10, 0); 
#include <algorithm> 
#include <vector>

    std::vector<int> v = {1, 2, 3, 4, 5};
    std::fill(v.begin(), v.end(), 0); 
    std::vector<int> v;
    v.assign(5, 100);
    std::vector<int> v = {1, 2, 3};
    v.resize(5, 0); 
    std::vector<int> source = {1, 2, 3};
    std::vector<int> destination(source.begin(), source.end()); 
    std::vector<int> source = {1, 2, 3};
    std::vector<int> destination;
    destination.assign(source.begin(), source.end()); 
