 #include <iostream>
    #include <iomanip> 
    int main() {
        double pi = 3.1415926535;
        std::cout << "Default precision: " << pi << std::endl;
        std::cout << "Set precision to 5 significant digits: " << std::setprecision(5) << pi << std::endl;
        return 0;
    }
