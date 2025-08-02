#include <iostream>
#include <cstdint> // For uint32_t

union DataConverter {
    float f_val;
    uint32_t i_val;
};

int main() {
    DataConverter converter;

    // Store a float value
    converter.f_val = 3.14f;

    // Access the same memory as an integer (type-punning)
    // This is technically undefined behavior in C++ but often works in practice
    // for specific use cases like low-level data manipulation or serialization.
    std::cout << "Float value: " << converter.f_val << std::endl;
    std::cout << "Integer representation: " << converter.i_val << std::endl;

    // Store an integer value
    converter.i_val = 0x40490FDB; // IEEE 754 representation of 3.14f

    // Access the same memory as a float
    std::cout << "Integer value: " << converter.i_val << std::endl;
    std::cout << "Float representation: " << converter.f_val << std::endl;

    return 0;
}