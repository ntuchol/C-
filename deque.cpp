#include <deque>
#include <iostream>

int main() {
    std::deque<int> myDeque;

    myDeque.push_back(10);
    myDeque.push_back(20);

    myDeque.push_front(5);
    myDeque.push_front(0);

    std::cout << "Deque elements: ";
    for (int x : myDeque) {
        std::cout << x << " ";
    }
    std::cout << std::endl; 
    
    myDeque.pop_front();
    myDeque.pop_back();

    std::cout << "Deque after pop operations: ";
    for (int x : myDeque) {
        std::cout << x << " ";
    }
    std::cout << std::endl; 

    return 0;
}
