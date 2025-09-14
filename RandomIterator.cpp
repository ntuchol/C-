#include <vector>
#include <iostream>

int main() {
    std::vector<int> myVector = {10, 20, 30, 40, 50};

    std::vector<int>::iterator it = myVector.begin();

    it += 2; 
    std::cout << "Element at current position: " << *it << std::endl; 
    std::cout << "Element at index 3: " << myVector[3] << std::endl; 
    
    std::vector<int>::iterator it_end = myVector.end();
    std::cout << "Distance from beginning to end: " << (it_end - myVector.begin()) << std::endl; 

    return 0;
}
