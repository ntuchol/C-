#include <iostream>
#include <vector>
#include <numeric> 
#include <cmath>  

double calculateStandardDeviation(const std::vector<double>& data) {
    if (data.empty()) {
        return 0.0; 
    }

    double sum = std::accumulate(data.begin(), data.end(), 0.0);
    double mean = sum / data.size();

    double variance_sum = 0.0;
    for (double val : data) {
        variance_sum += std::pow(val - mean, 2);
    }
    double variance = variance_sum / data.size(); 

    return std::sqrt(variance);
}

int main() {
    std::vector<double> my_data = {4.0, 9.0, 11.0, 12.0, 17.0};
    double sd = calculateStandardDeviation(my_data);
    std::cout << "Standard Deviation: " << sd << std::endl; 
    return 0;
}
