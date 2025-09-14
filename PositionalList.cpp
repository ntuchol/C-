#include <iostream>
#include <list>

int main() {
    std::list<int> myPositionalList = {10, 20, 30, 40, 50};

    auto it = myPositionalList.begin();
    std::advance(it, 2); 
    myPositionalList.insert(it, 25); 
    
    it = myPositionalList.begin();
    std::advance(it, 3); 
    myPositionalList.erase(it); 
    
    for (int value : myPositionalList) {
        std::cout << value << " ";
    }
    std::cout << std::endl; 

    return 0;
}
