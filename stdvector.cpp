#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers; 

    numbers.push_back(10); 
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Size of vector: " << numbers.size() << std::endl;

    numbers.insert(numbers.begin() + 1, 15); 

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    numbers.pop_back(); 

    return 0;
}
