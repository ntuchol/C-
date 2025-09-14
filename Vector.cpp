#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};

    numbers.push_back(40);
    numbers.push_back(50);

    numbers[2] = 35; 
    std::cout << "Vector elements: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector size: " << numbers.size() << std::endl;

    numbers.pop_back();

    std::cout << "Vector after pop_back: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
