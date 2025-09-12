#include <iostream>
#include <complex>
#include <cmath> 
int main() {
    std::complex<double> z1(3.0, 4.0);
    std::complex<double> z2 = 1.0 + 2.0i; 
    std::complex<double> sum = z1 + z2;
    std::complex<double> product = z1 * z2;

    std::cout << "z1 = " << z1.real() << " + " << z1.imag() << "i\n";

    double magnitude = std::abs(z1);
    double phase_angle = std::arg(z1);

    std::cout << "Magnitude of z1: " << magnitude << "\n";
    std::cout << "Phase angle of z1: " << phase_angle << " radians\n";

    std::complex<double> conjugate_z1 = std::conj(z1);
    std::cout << "Conjugate of z1: " << conjugate_z1 << "\n";

    const double PI = std::acos(-1.0); 
    std::complex<double> euler_result = std::exp(std::complex<double>(0.0, PI));
    std::cout << "e^(i*pi) = " << euler_result << "\n";

    return 0;
}
