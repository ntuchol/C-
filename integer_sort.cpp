#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    std::vector<int> numbers = {7, 1, 5, 3, 9, 2, 8, 4, 6};

    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted in ascending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    std::cout << "Sorted in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
