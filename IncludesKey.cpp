#include <iostream>
    #include <map>

    int main() {
        std::map<int, std::string> myMap;
        myMap[1] = "Apple";
        myMap[2] = "Banana";

        int key_to_check = 1;
        if (myMap.find(key_to_check) != myMap.end()) {
            std::cout << "Key " << key_to_check << " found." << std::endl;
        } else {
            std::cout << "Key " << key_to_check << " not found." << std::endl;
        }

        key_to_check = 3;
        if (myMap.find(key_to_check) != myMap.end()) {
            std::cout << "Key " << key_to_check << " found." << std::endl;
        } else {
            std::cout << "Key " << key_to_check << " not found." << std::endl;
        }
        return 0;
    }
#include <iostream>
#include <map>

    int main() {
        std::map<int, std::string> myMap;
        myMap[1] = "Apple";
        myMap[2] = "Banana";

        int key_to_check = 2;
        if (myMap.count(key_to_check) > 0) { 
            std::cout << "Key " << key_to_check << " found." << std::endl;
        } else {
            std::cout << "Key " << key_to_check << " not found." << std::endl;
        }
        return 0;
    }
