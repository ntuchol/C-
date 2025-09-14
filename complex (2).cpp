#include <iostream>
#include <complex>

int main() {
    std::complex<double> z1(3.0, 4.0);
    std::complex<double> z2(1.0, 2.0); 

    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    std::complex<double> sum = z1 + z2;
    std::complex<double> product = z1 * z2;
    std::complex<double> conjugate_z1 = std::conj(z1);
    double magnitude_z1 = std::abs(z1);

    std::cout << "z1 + z2 = " << sum << std::endl;
    std::cout << "z1 * z2 = " << product << std::endl;
    std::cout << "Conjugate of z1 = " << conjugate_z1 << std::endl;
    std::cout << "Magnitude of z1 = " << magnitude_z1 << std::endl;

    return 0;
}
