#include <vector>
#include <numeric> 
#include <algorithm> 
std::vector<Fraction> generateFareySequence(int n) {
    std::vector<Fraction> farey_sequence;

    farey_sequence.push_back({0, 1});
    if (n >= 1) { 
        farey_sequence.push_back({1, 1});
    }

    for (int b = 2; b <= n; ++b) {
        for (int a = 1; a < b; ++a) { 
            if (std::gcd(a, b) == 1) { 
                farey_sequence.push_back({a, b});
            }
        }
    }

    std::sort(farey_sequence.begin(), farey_sequence.end(), [](const Fraction& f1, const Fraction& f2) {
        return static_cast<double>(f1.num) / f1.den < static_cast<double>(f2.num) / f2.den;
    });

    return farey_sequence;
}
