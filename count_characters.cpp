#include <iostream>
    #include <string>
    #include <algorithm> // For std::count

    int main() {
        std::string text = "hello world";
        char target_char = 'o';
        long count = std::count(text.begin(), text.end(), target_char);
        std::cout << "The character '" << target_char << "' appears " << count << " times." << std::endl;
        return 0;
    }

