    radians = degrees * (PI / 180.0)
    #include <cmath> 
    #include <iostream>

    int main() {
        double degrees = 90.0;
        double radians = degrees * (M_PI / 180.0);
        double sine_value = std::sin(radians);
        std::cout << "Sine of 90 degrees (in radians): " << sine_value << std::endl;
        return 0;
    }
