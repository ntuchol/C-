#include <iostream>
#include <string>
#include <algorithm> // Required for std::next_permutation

int main() {
    std::string s = "abc"; // The string for which to generate permutations

    // Sort the string initially to get the first lexicographical permutation
    // std::next_permutation works correctly only if the range is sorted initially
    std::sort(s.begin(), s.end());

    std::cout << "Permutations of \"" << s << "\":" << std::endl;

    // Loop to generate and print all permutations
    do {
        std::cout << s << std::endl;
    } while (std::next_permutation(s.begin(), s.end()));

    return 0;
}