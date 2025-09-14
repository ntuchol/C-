#include <iostream>
#include <vector>
#include <cmath> 
int main() {
    double R = 10000000.0; 

    double ratio = 1 - 1.0 / R; 
    int num_terms = 20;

    std::vector<double> geometric_sequence(num_terms);
    std::vector<double> arithmetic_sequence(num_terms);

    geometric_sequence[0] = R;
    arithmetic_sequence[0] = 0.0; 
    for (int i = 1; i < num_terms; ++i) {
        geometric_sequence[i] = geometric_sequence[i - 1] * ratio;
        arithmetic_sequence[i] = arithmetic_sequence[i - 1] + (R / R); 
    }

    std::cout << "Geometric Sequence (Napier's 'Sines'):" << std::endl;
    for (double val : geometric_sequence) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Arithmetic Sequence (Napier's 'Logarithms'):" << std::endl;
    for (double val : arithmetic_sequence) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
