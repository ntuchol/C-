#include <iostream>
#include <complex>

int main() {
    std::complex<double> z1(3.0, 4.0); 
    std::complex<double> z2(1.0, 2.0); 

    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;
    std::cout << "z1 + z2 = " << z1 + z2 << std::endl;
    std::cout << "Magnitude of z1 = " << abs(z1) << std::endl;
    std::cout << "Conjugate of z1 = " << conj(z1) << std::endl;

    return 0;
}
