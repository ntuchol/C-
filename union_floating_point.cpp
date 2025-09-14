#include <iostream>
#include <cstdint> 

union DataConverter {
    float f_val;
    uint32_t i_val;
};

int main() {
    DataConverter converter;

    converter.f_val = 3.14f;

    std::cout << "Float value: " << converter.f_val << std::endl;
    std::cout << "Integer representation: " << converter.i_val << std::endl;

    converter.i_val = 0x40490FDB; 
    std::cout << "Integer value: " << converter.i_val << std::endl;
    std::cout << "Float representation: " << converter.f_val << std::endl;

    return 0;
}
