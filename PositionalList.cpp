#include <iostream>
#include <list>

int main() {
    std::list<int> myPositionalList = {10, 20, 30, 40, 50};

    // Insert an element at a specific position
    auto it = myPositionalList.begin();
    std::advance(it, 2); // Move iterator to the third element (value 30)
    myPositionalList.insert(it, 25); // Insert 25 before 30

    // Erase an element
    it = myPositionalList.begin();
    std::advance(it, 3); // Move iterator to the fourth element (value 30)
    myPositionalList.erase(it); // Erase 30

    // Print the list
    for (int value : myPositionalList) {
        std::cout << value << " ";
    }
    std::cout << std::endl; // Output: 10 20 25 40 50

    return 0;
}