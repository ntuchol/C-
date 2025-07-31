#include <vector>
#include <numeric> // For std::accumulate

double calculateChiSquareStatistic(const std::vector<double>& observed, const std::vector<double>& expected) {
    if (observed.size() != expected.size() || observed.empty()) {
        // Handle error: sizes must match and not be empty
        return -1.0; // Or throw an exception
    }

    double chiSquare = 0.0;
    for (size_t i = 0; i < observed.size(); ++i) {
        if (expected[i] == 0) {
            // Handle error: expected frequency cannot be zero
            return -1.0; // Or throw an exception
        }
        chiSquare += (observed[i] - expected[i]) * (observed[i] - expected[i]) / expected[i];
    }
    return chiSquare;
}