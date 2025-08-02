#include <vector>
#include <iostream>

class Polynomial {
private:
    std::vector<double> coefficients;

public:
    // Constructor
    Polynomial(const std::vector<double>& coeffs) : coefficients(coeffs) {}

    // Operator overloading for addition
    Polynomial operator+(const Polynomial& other) const {
        size_t max_size = std::max(coefficients.size(), other.coefficients.size());
        std::vector<double> result_coeffs(max_size, 0.0);

        for (size_t i = 0; i < max_size; ++i) {
            double coeff1 = (i < coefficients.size()) ? coefficients[i] : 0.0;
            double coeff2 = (i < other.coefficients.size()) ? other.coefficients[i] : 0.0;
            result_coeffs[i] = coeff1 + coeff2;
        }
        return Polynomial(result_coeffs);
    }

    // Evaluation method (Horner's method)
    double evaluate(double x) const {
        double result = 0.0;
        for (int i = coefficients.size() - 1; i >= 0; --i) {
            result = result * x + coefficients[i];
        }
        return result;
    }

    // Print method
    void print() const {
        for (int i = coefficients.size() - 1; i >= 0; --i) {
            if (coefficients[i] != 0.0) {
                if (i < coefficients.size() - 1 && coefficients[i] > 0) {
                    std::cout << " + ";
                } else if (i < coefficients.size() - 1 && coefficients[i] < 0) {
                    std::cout << " - ";
                }
                std::cout << std::abs(coefficients[i]);
                if (i > 0) {
                    std::cout << "x";
                    if (i > 1) {
                        std::cout << "^" << i;
                    }
                }
            }
        }
        std::cout << std::endl;
    }
};