#include <iostream>
#include <string>
#include <algorithm> 
int main() {
    std::string s = "abc"; 
    std::sort(s.begin(), s.end());

    std::cout << "Permutations of \"" << s << "\":" << std::endl;

    do {
        std::cout << s << std::endl;
    } while (std::next_permutation(s.begin(), s.end()));

    return 0;
}
