#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    numbers.push_front(5);
    numbers.push_back(55);

    std::cout << "Numbers in the list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    numbers.remove(30); 
    
    std::cout << "Numbers after removing 30: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
