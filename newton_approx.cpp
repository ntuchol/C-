#include <iostream>
#include <cmath> // For fabs

double cubeRootNewton(double N, double epsilon = 1e-7, int maxIterations = 100) {
    if (N == 0.0) {
        return 0.0;
    }

    double x = N; // Initial guess, can be refined for better performance
    double prev_x;
    int iterations = 0;

    do {
        prev_x = x;
        // Newton's method formula for cube root
        x = (2.0 * prev_x / 3.0) + (N / (3.0 * prev_x * prev_x));
        iterations++;
    } while (fabs(x - prev_x) > epsilon && iterations < maxIterations);

    return x;
}

int main() {
    double number = 27.0;
    double cube_root = cubeRootNewton(number);
    std::cout << "The cube root of " << number << " is: " << cube_root << std::endl;

    number = 64.0;
    cube_root = cubeRootNewton(number);
    std::cout << "The cube root of " << number << " is: " << cube_root << std::endl;

    number = 10.0;
    cube_root = cubeRootNewton(number);
    std::cout << "The cube root of " << number << " is: " << cube_root << std::endl;

    return 0;
}