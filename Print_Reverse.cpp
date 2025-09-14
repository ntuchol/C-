#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string text = "Hello, C++!";
    std::reverse(text.begin(), text.end()); 
    std::cout << "Reversed string: " << text << std::endl;
    return 0;
}
