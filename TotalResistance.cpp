#include <iostream>
#include <vector>
#include <numeric> 

double calculateSeriesResistance(const std::vector<double>& resistors) {
    return std::accumulate(resistors.begin(), resistors.end(), 0.0);
}

double calculateParallelResistance(const std::vector<double>& resistors) {
    double sumOfReciprocals = 0.0;
    for (double r : resistors) {
        if (r == 0) {
            std::cerr << "Error: Resistance cannot be zero in parallel calculation." << std::endl;
            return 0.0; 
        }
        sumOfReciprocals += 1.0 / r;
    }
    if (sumOfReciprocals == 0) {
        return 0.0; 
    }
    return 1.0 / sumOfReciprocals;
}

int main() {
    std::vector<double> seriesResistors = {10.0, 20.0, 30.0};
    double totalSeriesR = calculateSeriesResistance(seriesResistors);
    std::cout << "Total series resistance: " << totalSeriesR << " Ohms" << std::endl;

    std::vector<double> parallelResistors = {10.0, 20.0, 30.0};
    double totalParallelR = calculateParallelResistance(parallelResistors);
    std::cout << "Total parallel resistance: " << totalParallelR << " Ohms" << std::endl;

    return 0;
}

