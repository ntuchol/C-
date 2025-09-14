#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};
    
    auto min_it = std::min_element(numbers.begin(), numbers.end());
    
    if (min_it != numbers.end()) { 
        std::cout << "Minimum element: " << *min_it << std::endl;
    } else {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}
