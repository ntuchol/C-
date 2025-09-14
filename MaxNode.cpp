#include <iostream>
#include <algorithm> 

    int main() {
        int a = 10;
        int b = 20;
        int max_val = std::max(a, b); 
        std::cout << "Max of a and b: " << max_val << std::endl;

        int max_list_val = std::max({5, 12, 3, 8, 15});
        std::cout << "Max in list: " << max_list_val << std::endl;

        return 0;
    }
