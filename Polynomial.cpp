#include <vector>
#include <iostream>
#include <algorithm> // For std::max

class Polynomial {
private:
    std::vector<double> coefficients; // coefficients[i] stores the coefficient of x^i

public:
    // Default constructor
    Polynomial() {}

    // Parameterized constructor
    Polynomial(const std::vector<double>& coeffs) : coefficients(coeffs) {
        removeTrailingZeros();
    }

    // Set a coefficient
    void setCoefficient(int degree, double coeff) {
        if (degree >= coefficients.size()) {
            coefficients.resize(degree + 1, 0.0);
        }
        coefficients[degree] = coeff;
        removeTrailingZeros();
    }

    // Get a coefficient
    double getCoefficient(int degree) const {
        if (degree < coefficients.size()) {
            return coefficients[degree];
        }
        return 0.0;
    }

    // Get the degree of the polynomial
    int getDegree() const {
        return coefficients.empty() ? -1 : coefficients.size() - 1;
    }

    // Evaluate the polynomial at a given x
    double operator()(double x) const {
        double result = 0.0;
        for (int i = 0; i < coefficients.size(); ++i) {
            result += coefficients[i] * std::pow(x, i);
        }
        return result;
    }

    // Overload + operator for polynomial addition
    Polynomial operator+(const Polynomial& other) const {
        int new_size = std::max(coefficients.size(), other.coefficients.size());
        std::vector<double> result_coeffs(new_size, 0.0);

        for (int i = 0; i < new_size; ++i) {
            double coeff1 = (i < coefficients.size()) ? coefficients[i] : 0.0;
            double coeff2 = (i < other.coefficients.size()) ? other.coefficients[i] : 0.0;
            result_coeffs[i] = coeff1 + coeff2;
        }
        return Polynomial(result_coeffs);
    }

    // Overload << operator for printing
    friend std::ostream& operator<<(std::ostream& os, const Polynomial& p) {
        if (p.coefficients.empty() || (p.coefficients.size() == 1 && p.coefficients[0] == 0.0)) {
            os << "0";
            return os;
        }
        bool first_term = true;
        for (int i = p.coefficients.size() - 1; i >= 0; --i) {
            double coeff = p.coefficients[i];
            if (coeff != 0.0) {
                if (!first_term && coeff > 0) {
                    os << " + ";
                } else if (!first_term && coeff < 0) {
                    os << " - ";
                    coeff = -coeff; // Print positive value after '-'
                }

                if (i == 0) { // Constant term
                    os << coeff;
                } else if (i == 1) { // Linear term
                    if (coeff != 1.0) os << coeff;
                    os << "x";
                } else { // Higher degree terms
                    if (coeff != 1.0) os << coeff;
                    os << "x^" << i;
                }
                first_term = false;
            }
        }
        return os;
    }

private:
    // Helper to remove trailing zero coefficients
    void removeTrailingZeros() {
        while (!coefficients.empty() && coefficients.back() == 0.0) {
            coefficients.pop_back();
        }
    }
};

