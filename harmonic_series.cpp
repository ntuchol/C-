#include <iostream>
#include <iomanip> 
int main() {
    int n;
    double sum = 0.0;

    std::cout << "Enter the number of terms (n) for the harmonic series: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Number of terms must be a positive integer." << std::endl;
        return 1; 
    }

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i; 
    }

    std::cout << "The sum of the harmonic series up to " << n << " terms is: ";
    std::cout << std::fixed << std::setprecision(6) << sum << std::endl;

    return 0; 
}
