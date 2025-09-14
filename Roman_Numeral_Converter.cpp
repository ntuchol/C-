#include <iostream>
#include <string>
#include <map>

int romanToDecimal(const std::string& roman) {
    std::map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    for (int i = 0; i < roman.length(); ++i) {
        int s1 = romanMap[roman[i]];
        if (i + 1 < roman.length()) {
            int s2 = romanMap[roman[i + 1]];
            if (s1 >= s2) {
                result += s1;
            } else {
                result += (s2 - s1);
                i++; 
            }
        } else {
            result += s1;
        }
    }
    return result;
}
