#include <iostream>
#include <vector>
#include <algorithm> 

class Polynomial {
private:
    std::vector<double> coeffs; 

public:
    Polynomial(const std::vector<double>& c) : coeffs(c) {}

    Polynomial operator-(const Polynomial& other) const {
        int max_degree = std::max(coeffs.size(), other.coeffs.size());
        std::vector<double> result_coeffs(max_degree, 0.0);

        for (int i = 0; i < max_degree; ++i) {
            double val1 = (i < coeffs.size()) ? coeffs[i] : 0.0;
            double val2 = (i < other.coeffs.size()) ? other.coeffs[i] : 0.0;
            result_coeffs[i] = val1 - val2;
        }
        return Polynomial(result_coeffs);
    }

    void print() const {
        for (int i = coeffs.size() - 1; i >= 0; --i) {
            if (coeffs[i] != 0) {
                if (i < coeffs.size() - 1) {
                    std::cout << (coeffs[i] > 0 ? " + " : " - ");
                    std::cout << std::abs(coeffs[i]);
                } else {
                    std::cout << coeffs[i];
                }

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

int main() {
    Polynomial p1({1, 2, 3}); 
    Polynomial p2({5, 1});    

    Polynomial p_diff = p1 - p2;
    std::cout << "Polynomial 1: ";
    p1.print();
    std::cout << "Polynomial 2: ";
    p2.print();
    std::cout << "Difference (P1 - P2): ";
    p_diff.print(); 

    return 0;
}
