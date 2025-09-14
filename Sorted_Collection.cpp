#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> sortedStrings;
    sortedStrings.insert("Bill");
    sortedStrings.insert("Steve");
    sortedStrings.insert("Apple");

    for (const std::string& s : sortedStrings) {
        std::cout << s << " "; 
    }
    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    std::vector<int> numbers = {5, 3, 2, 1, 4};
    std::sort(numbers.begin(), numbers.end()); 
    
    for (int num : numbers) {
        std::cout << num << " "; 
    }
    std::cout << std::endl;
    return 0;
}
