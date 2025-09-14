  #include <iostream>

  
    int main() {
        Rational r1(1, 2); 
        Rational r2(3, 4); 
        Rational sum = r1 + r2; 
        std::cout << "Sum: " << sum << std::endl;
        if (r1 < r2) {
            std::cout << "r1 is less than r2" << std::endl;
        }
        return 0;
    }
