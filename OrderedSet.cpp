#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> myOrderedSet;

    // Insert elements
    myOrderedSet.insert("apple");
    myOrderedSet.insert("banana");
    myOrderedSet.insert("orange");
    myOrderedSet.insert("apple"); // This will be ignored as 'apple' already exists

    // Iterate and print elements (they will be in sorted order)
    std::cout << "Elements in the set:" << std::endl;
    for (const std::string& fruit : myOrderedSet) {
        std::cout << fruit << std::endl;
    }

    // Search for an element
    if (myOrderedSet.count("banana")) {
        std::cout << "Banana is in the set." << std::endl;
    } else {
        std::cout << "Banana is not in the set." << std::endl;
    }

    // Remove an element
    myOrderedSet.erase("orange");

    std::cout << "Elements after removing orange:" << std::endl;
    for (const std::string& fruit : myOrderedSet) {
        std::cout << fruit << std::endl;
    }

    return 0;
}