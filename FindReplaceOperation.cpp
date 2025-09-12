#include <iostream>  
#include <string>    
void replaceAll(std::string& text, const std::string& findStr, const std::string& replaceStr) {
    size_t pos = 0; 
    while ((pos = text.find(findStr, pos)) != std::string::npos) { 
        text.replace(pos, findStr.length(), replaceStr); 
        pos += replaceStr.length(); 
    }
}

int main() {
    std::string text;
    std::string findString;
    std::string replaceString;

    std::cout << "Enter the original text: ";
    std::getline(std::cin, text); 
    
    std::cout << "Enter the string to find: ";
    std::getline(std::cin, findString);

    std::cout << "Enter the string to replace with: ";
    std::getline(std::cin, replaceString);

    replaceAll(text, findString, replaceString);

    std::cout << "\nModified text:\n" << text << std::endl;

    return 0;
}
