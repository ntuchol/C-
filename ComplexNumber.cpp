#include <iostream>
#include <complex>
#include <cmath> // For std::acos and std::numbers::pi (C++20)

int main() {
    // Declare and initialize complex numbers
    std::complex<double> z1(3.0, 4.0); // Represents 3 + 4i
    std::complex<double> z2 = 1.0 + 2.0i; // Using imaginary literal (C++14)

    // Arithmetic operations
    std::complex<double> sum = z1 + z2;
    std::complex<double> product = z1 * z2;

    // Accessing real and imaginary parts
    std::cout << "z1 = " << z1.real() << " + " << z1.imag() << "i\n";

    // Magnitude and phase angle
    double magnitude = std::abs(z1);
    double phase_angle = std::arg(z1);

    std::cout << "Magnitude of z1: " << magnitude << "\n";
    std::cout << "Phase angle of z1: " << phase_angle << " radians\n";

    // Complex conjugate
    std::complex<double> conjugate_z1 = std::conj(z1);
    std::cout << "Conjugate of z1: " << conjugate_z1 << "\n";

    // Euler's formula: e^(i*pi) = -1
    const double PI = std::acos(-1.0); // Or std::numbers::pi in C++20
    std::complex<double> euler_result = std::exp(std::complex<double>(0.0, PI));
    std::cout << "e^(i*pi) = " << euler_result << "\n";

    return 0;
}