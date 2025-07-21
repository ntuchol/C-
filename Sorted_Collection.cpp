#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> sortedStrings;
    sortedStrings.insert("Bill");
    sortedStrings.insert("Steve");
    sortedStrings.insert("Apple");

    for (const std::string& s : sortedStrings) {
        std::cout << s << " "; // Output: Apple Bill Steve
    }
    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main() {
    std::vector<int> numbers = {5, 3, 2, 1, 4};
    std::sort(numbers.begin(), numbers.end()); // Sorts in ascending order

    for (int num : numbers) {
        std::cout << num << " "; // Output: 1 2 3 4 5
    }
    std::cout << std::endl;
    return 0;
}