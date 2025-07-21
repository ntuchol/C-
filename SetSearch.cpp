    std::set<KeyType>::iterator it = mySet.find(valueToFind);
    #include <iostream>
    #include <set>

    int main() {
        std::set<int> mySet = {10, 20, 30, 40, 50};

        // Search for an existing element
        auto it1 = mySet.find(30);
        if (it1 != mySet.end()) {
            std::cout << "Element 30 found in the set." << std::endl;
        } else {
            std::cout << "Element 30 not found." << std::endl;
        }

        // Search for a non-existing element
        auto it2 = mySet.find(25);
        if (it2 != mySet.end()) {
            std::cout << "Element 25 found in the set." << std::endl;
        } else {
            std::cout << "Element 25 not found." << std::endl;
        }

        return 0;
    }
        size_t numOccurrences = mySet.count(valueToFind);
        bool isPresent = mySet.contains(valueToFind);
