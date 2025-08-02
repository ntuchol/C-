#include <iostream>
#include <set>
#include <functional> // Required for std::greater

int main() {
    // Creating a set of integers (default ascending order)
    std::set<int> mySet = {3, 1, 4, 1, 5, 9, 2, 6};

    std::cout << "Elements in ascending order: ";
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 1 2 3 4 5 6 9

    // Creating a set of integers (descending order)
    std::set<int, std::greater<int>> descendingSet = {3, 1, 4, 1, 5, 9, 2, 6};

    std::cout << "Elements in descending order: ";
    for (int num : descendingSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 9 6 5 4 3 2 1

    // Inserting a new element
    mySet.insert(7);

    // Checking for an element
    if (mySet.count(5)) {
        std::cout << "5 is in mySet." << std::endl;
    }

    // Removing an element
    mySet.erase(1);

    std::cout << "mySet after operations: ";
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Output: 2 3 4 5 6 7 9

    return 0;
}