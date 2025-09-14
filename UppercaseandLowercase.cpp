#include <iostream>
#include <cctype> 
int main() {
    char ch = 'a';
    char upper_ch = toupper(ch); 
    std::cout << "Uppercase: " << upper_ch << std::endl;

    char ch2 = 'B';
    char lower_ch = tolower(ch2); 
    std::cout << "Lowercase: " << lower_ch << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>    

int main() {
    std::string text = "Hello World!";

    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::cout << "Uppercase string: " << text << std::endl; 

    std::transform(text.begin(), text.end(), text.begin(), ::tolower);
    std::cout << "Lowercase string: " << text << std::endl; 

    return 0;
}
