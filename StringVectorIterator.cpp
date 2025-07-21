#include <vector>
    #include <string>
    #include <iostream>

    int main() {
        std::vector<std::string> words = {"apple", "banana", "cherry"};

        // Declare a modifiable iterator
        std::vector<std::string>::iterator it;

        // Declare a constant iterator
        std::vector<std::string>::const_iterator const_it;

        return 0;
    }
    
    // Initialize iterator to the beginning
    it = words.begin();

    // Initialize constant iterator to the beginning
    const_it = words.cbegin(); // Use cbegin() for const_iterator
    
    for (std::vector<std::string>::iterator iter = words.begin(); iter != words.end(); ++iter) {
        std::cout << *iter << std::endl; // Dereference to access the string
    }
    for (const std::string& str : words) {
        std::cout << str << std::endl;
    }