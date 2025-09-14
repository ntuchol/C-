#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4, 2, 5};
    int target_value = 2;

    int count = std::count(numbers.begin(), numbers.end(), target_value);

    std::cout << "The value " << target_value << " appears " << count << " times." << std::endl;

    return 0;
}
