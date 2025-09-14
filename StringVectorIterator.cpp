#include <vector>
#include <string>
#include <iostream>

    int main() {
        std::vector<std::string> words = {"apple", "banana", "cherry"};

        std::vector<std::string>::iterator it;

        std::vector<std::string>::const_iterator const_it;

        return 0;
    }
    
    it = words.begin();

    const_it = words.cbegin(); 

    for (std::vector<std::string>::iterator iter = words.begin(); iter != words.end(); ++iter) {
        std::cout << *iter << std::endl; 
    }
    for (const std::string& str : words) {
        std::cout << str << std::endl;
    }
