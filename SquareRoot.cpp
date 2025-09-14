#include <iostream> 
#include <cmath>    

int main() {
    double number = 25.0;
    double squareRoot = std::sqrt(number); 

    std::cout << "The square root of " << number << " is " << squareRoot << std::endl;

    int intNumber = 16;
    double intSquareRoot = std::sqrt(static_cast<double>(intNumber)); 
    std::cout << "The square root of " << intNumber << " is " << intSquareRoot << std::endl;

    return 0;
}
