int my_int = 123;
  long big_int = 1000000L; 
  float my_float = 3.14f; 
  double my_double = 19.99;
    int large_number = 1'000'000;

#include <iostream>

int main() {
    int num = 42;
    double pi = 3.14159;
    std::cout << "The integer is: " << num << std::endl;
    std::cout << "Pi is approximately: " << pi << std::endl;
    return 0;
}

#include <fstream>
#include <iostream>

int main() {
    std::ofstream output_file("numbers.txt");
    if (output_file.is_open()) {
        int value = 100;
        output_file << "This is a number: " << value << std::endl;
        output_file.close();
        std::cout << "Number written to file." << std::endl;
    } else {
        std::cerr << "Error opening file." << std::endl;
    }
    return 0;
}

#include <string>
#include <iostream>

int main() {
    int number = 789;
    std::string number_as_string = std::to_string(number);
    std::cout << "Number as string: " << number_as_string << std::endl;
    return 0;
}
