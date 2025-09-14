#include <iostream>
#include <string>
#include <algorithm> 

bool isPalindrome(const std::string& s) {
    std::string cleaned_s;
    for (char c : s) {
        if (std::isalnum(c)) { 
            cleaned_s += std::tolower(c); 
        }
    }

    int left = 0;
    int right = cleaned_s.length() - 1;

    while (left < right) {
        if (cleaned_s[left] != cleaned_s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string str1 = "Madam, I'm Adam.";
    std::string str2 = "Race a car";
    std::string str3 = "A man, a plan, a canal: Panama";

    if (isPalindrome(str1)) {
        std::cout << "\"" << str1 << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str1 << "\" is not a palindrome." << std::endl;
    }

    if (isPalindrome(str2)) {
        std::cout << "\"" << str2 << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str2 << "\" is not a palindrome." << std::endl;
    }

    if (isPalindrome(str3)) {
        std::cout << "\"" << str3 << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str3 << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
