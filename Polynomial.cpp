#include <vector>
#include <iostream>
#include <algorithm> 

class Polynomial {
private:
    std::vector<double> coefficients; 

public:
    Polynomial() {}

    Polynomial(const std::vector<double>& coeffs) : coefficients(coeffs) {
        removeTrailingZeros();
    }

    void setCoefficient(int degree, double coeff) {
        if (degree >= coefficients.size()) {
            coefficients.resize(degree + 1, 0.0);
        }
        coefficients[degree] = coeff;
        removeTrailingZeros();
    }

    double getCoefficient(int degree) const {
        if (degree < coefficients.size()) {
            return coefficients[degree];
        }
        return 0.0;
    }

    int getDegree() const {
        return coefficients.empty() ? -1 : coefficients.size() - 1;
    }

    double operator()(double x) const {
        double result = 0.0;
        for (int i = 0; i < coefficients.size(); ++i) {
            result += coefficients[i] * std::pow(x, i);
        }
        return result;
    }

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
                    coeff = -coeff; 
                }

                if (i == 0) { 
                    os << coeff;
                } else if (i == 1) { 
                    if (coeff != 1.0) os << coeff;
                    os << "x";
                } else { 
                    if (coeff != 1.0) os << coeff;
                    os << "x^" << i;
                }
                first_term = false;
            }
        }
        return os;
    }

private:
    void removeTrailingZeros() {
        while (!coefficients.empty() && coefficients.back() == 0.0) {
            coefficients.pop_back();
        }
    }
};

