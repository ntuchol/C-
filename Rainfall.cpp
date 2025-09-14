#include <iostream>
#include <vector>
#include <string>
#include <numeric> 
#include <algorithm> 

void getRainfallData(std::vector<double>& rainfall, const std::vector<std::string>& months);

double calculateTotal(const std::vector<double>& rainfall);

double calculateAverage(const std::vector<double>& rainfall);

int findHighestRainfallMonth(const std::vector<double>& rainfall);

int findLowestRainfallMonth(const std::vector<double>& rainfall);

int main() {
    return 0;
}
