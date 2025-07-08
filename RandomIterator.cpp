#include <vector>
#include <iostream>

int main() {
    std::vector<int> myVector = {10, 20, 30, 40, 50};

    // Get a random access iterator to the beginning
    std::vector<int>::iterator it = myVector.begin();

    // Move forward by 2 elements
    it += 2; 
    std::cout << "Element at current position: " << *it << std::endl; // Output: 30

    // Access an element using subscripting
    std::cout << "Element at index 3: " << myVector[3] << std::endl; // Output: 40

    // Calculate distance between iterators
    std::vector<int>::iterator it_end = myVector.end();
    std::cout << "Distance from beginning to end: " << (it_end - myVector.begin()) << std::endl; // Output: 5

    return 0;
}