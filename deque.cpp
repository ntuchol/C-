#include <deque>
#include <iostream>

int main() {
    std::deque<int> myDeque;

    // Add elements to the back
    myDeque.push_back(10);
    myDeque.push_back(20);

    // Add elements to the front
    myDeque.push_front(5);
    myDeque.push_front(0);

    // Print elements
    std::cout << "Deque elements: ";
    for (int x : myDeque) {
        std::cout << x << " ";
    }
    std::cout << std::endl; // Output: 0 5 10 20

    // Remove elements from front and back
    myDeque.pop_front();
    myDeque.pop_back();

    // Print elements after removal
    std::cout << "Deque after pop operations: ";
    for (int x : myDeque) {
        std::cout << x << " ";
    }
    std::cout << std::endl; // Output: 5 10

    return 0;
}