#include <vector>
#include <iostream>

int main() {
    std::vector<std::vector<char>> maze = {
        {'S', '0', '1'},
        {'1', '0', '1'},
        {'1', '0', 'E'}
    };

    for (const auto& row : maze) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
