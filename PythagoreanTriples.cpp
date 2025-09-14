#include <iostream>
#include <cmath> 
void findPythagoreanTriples(int limit) {
    for (int a = 1; a <= limit; ++a) {
        for (int b = a; b <= limit; ++b) { 
            double c_squared = static_cast<double>(a * a + b * b);
            double c = std::sqrt(c_squared);

            if (c == static_cast<int>(c)) {
                std::cout << "(" << a << ", " << b << ", " << static_cast<int>(c) << ")\n";
            }
        }
    }
}

int main() {
    int limit = 20; 
    findPythagoreanTriples(limit);
    return 0;
}
