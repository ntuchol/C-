#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    std::string sub = str.substr(6, 5); // Extracts 5 characters starting from index 6
    std::cout << sub << std::endl; // Output: World
    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello World!";
    std::string str2 = "Amazing ";
    str1.insert(6, str2); // Inserts "Amazing " at index 6 in str1
    std::cout << str1; // Output: Hello Amazing World!
    return 0;
}