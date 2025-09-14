 #include <iostream>

    int getNumberFromUser() {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        return number;
    }
    int main() {
        int myNumber = getNumberFromUser();
        std::cout << "You entered: " << myNumber << std::endl;
        return 0;
    }
