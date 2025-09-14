#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main() {
    std::map<std::string, int> studentScores_map;
    studentScores_map["Alice"] = 95;
    studentScores_map["Bob"] = 88;
    studentScores_map["Charlie"] = 92;

    std::cout << "Alice's score (map): " << studentScores_map["Alice"] << std::endl;

    std::unordered_map<std::string, int> studentScores_unordered_map;
    studentScores_unordered_map["Alice"] = 95;
    studentScores_unordered_map["Bob"] = 88;
    studentScores_unordered_map["Charlie"] = 92;

    std::cout << "Bob's score (unordered_map): " << studentScores_unordered_map["Bob"] << std::endl;

    return 0;
}
