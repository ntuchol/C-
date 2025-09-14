void fill(iterator first, iterator last, const T& value);
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> numbers(5); 
    
    std::fill(numbers.begin(), numbers.end(), 10);

    for (int num : numbers) {
        std::cout << num << " "; 
    }
    std::cout << std::endl;

    std::fill(numbers.begin() + 1, numbers.begin() + 4, 5);

    for (int num : numbers) {
        std::cout << num << " "; 
    }
    std::cout << std::endl;

    return 0;
}
