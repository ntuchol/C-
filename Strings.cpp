#include <iostream>
#include <string> 
int main() {
    std::string str1; 
    std::string str2; 
    
    std::cout << "Enter the first string: ";
    std::cin >> str1; 
    
    std::cout << "Enter the second string: ";
    std::cin >> str2; 
    
    if (str1 < str2) {
        std::cout << "\"" << str1 << "\" is lexicographically less than \"" << str2 << "\"." << std::endl;
    } else if (str2 < str1) {
        std::cout << "\"" << str2 << "\" is lexicographically less than \"" << str1 << "\"." << std::endl;
    } else {
        std::cout << "The two strings are lexicographically equal." << std::endl;
    }

    return 0; 
}
