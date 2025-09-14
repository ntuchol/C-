#include <algorithm> 
#include <functional> 
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text = "This is a sample text for demonstration purposes.";
    std::string pattern = "sample";

    std::boyer_moore_searcher searcher(pattern.begin(), pattern.end());

    auto result = std::search(text.begin(), text.end(), searcher);

    if (result != text.end()) {
        std::cout << "Pattern found at index: " << std::distance(text.begin(), result) << std::endl;
    } else {
        std::cout << "Pattern not found." << std::endl;
    }

    return 0;
}

