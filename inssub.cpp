#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    std::string sub = str.substr(6, 5); 
    std::cout << sub << std::endl; 
    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello World!";
    std::string str2 = "Amazing ";
    str1.insert(6, str2); 
    std::cout << str1; 
    return 0;
}
