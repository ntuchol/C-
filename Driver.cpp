    class Calculator {
    public:
        int add(int a, int b);
    };
    #include "calculator.h"
    #include <iostream>

    int main() {
        Calculator calc;
        int result = calc.add(5, 3);
        std::cout << "Result of addition: " << result << std::endl;
        return 0;
    }

class SensorDriver {
    public:
        SensorDriver();
        bool initialize();
        double readTemperature();
    private:
    };
