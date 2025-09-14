#include <iostream>
#include <set>
#include <functional> 
int main() {
    std::set<int> mySet = {3, 1, 4, 1, 5, 9, 2, 6};

    std::cout << "Elements in ascending order: ";
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::set<int, std::greater<int>> descendingSet = {3, 1, 4, 1, 5, 9, 2, 6};

    std::cout << "Elements in descending order: ";
    for (int num : descendingSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl; 

    mySet.insert(7);

    if (mySet.count(5)) {
        std::cout << "5 is in mySet." << std::endl;
    }

    mySet.erase(1);

    std::cout << "mySet after operations: ";
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl; 

    return 0;
}
