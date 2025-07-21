#include <vector>
#include <string>
#include <iostream>
#include <ranges> // For views::zip

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<char> letters = {'a', 'b', 'c'};

    for (auto [num, letter] : std::views::zip(numbers, letters)) {
        std::cout << num << " " << letter << std::endl;
    }

    return 0;
}