#include <iostream>
#include <string>
#include <map>
#include <cctype> 


std::map<char, std::string> morse_map = {
    {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."},
    {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"},
    {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"},
    {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"},
    {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"},
    {'z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
    {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
    {'0', "-----"}, {' ', "/"} 
};

std::string englishToMorse(const std::string& text) {
    std::string morse_code = "";
    for (char c : text) {
        char lower_c = std::tolower(c);
        if (morse_map.count(lower_c)) {
            morse_code += morse_map[lower_c] + " ";
        } else {
            morse_code += "? "; 
        }
    }
    return morse_code;
}

int main() {
    std::string input_text = "Hello World";
    std::cout << "Morse code: " << englishToMorse(input_text) << std::endl;
    return 0;
}
