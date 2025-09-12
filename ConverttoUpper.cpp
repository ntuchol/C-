#include <iostream>
#include <cctype> 

int main() {
    char ch = 'a';
    char uppercase_ch = toupper(ch);
    std::cout << "Original: " << ch << ", Uppercase: " << uppercase_ch << std::endl;

    ch = 'B'; 
    uppercase_ch = toupper(ch);
    std::cout << "Original: " << ch << ", Uppercase: " << uppercase_ch << std::endl;

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

    return 0;
}
