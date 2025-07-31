#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate
#include <cmath>   // For std::pow and std::sqrt

double calculateStandardDeviation(const std::vector<double>& data) {
    if (data.empty()) {
        return 0.0; // Handle empty data set
    }

    // 1. Calculate the mean
    double sum = std::accumulate(data.begin(), data.end(), 0.0);
    double mean = sum / data.size();

    // 2. Calculate the variance
    double variance_sum = 0.0;
    for (double val : data) {
        variance_sum += std::pow(val - mean, 2);
    }
    double variance = variance_sum / data.size(); // Population standard deviation

    // 3. Calculate the standard deviation
    return std::sqrt(variance);
}

int main() {
    std::vector<double> my_data = {4.0, 9.0, 11.0, 12.0, 17.0};
    double sd = calculateStandardDeviation(my_data);
    std::cout << "Standard Deviation: " << sd << std::endl; 
    return 0;
}