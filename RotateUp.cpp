#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2; 
    
    std::rotate(arr.begin(), arr.begin() + d, arr.end());

    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl; 

    return 0;
}
