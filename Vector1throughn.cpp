#include <iostream>
#include <vector>
#include <numeric> 
int main() {
    const int n = 10; 
    std::vector<int> numbers(n);

    std::iota(numbers.begin(), numbers.end(), 1);

    std::cout << "Vector elements (1 to " << n << "): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
