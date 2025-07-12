// calculator.h
    class Calculator {
    public:
        int add(int a, int b);
        // ... other methods
    };

    // main.cpp (Driver Program)
    #include "calculator.h"
    #include <iostream>

    int main() {
        Calculator calc;
        int result = calc.add(5, 3);
        std::cout << "Result of addition: " << result << std::endl;
        // ... test other functionalities
        return 0;
    }
    // sensor_driver.h
    class SensorDriver {
    public:
        SensorDriver();
        bool initialize();
        double readTemperature();
        // ... other sensor-specific methods
    private:
        // ... hardware interaction details
    };