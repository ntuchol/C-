#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 

double calculateTotal(const std::vector<double>& rainfall);
double calculateAverage(const std::vector<double>& rainfall);
int findHighestMonthIndex(const std::vector<double>& rainfall);
int findLowestMonthIndex(const std::vector<double>& rainfall);

int main() {
    const int NUM_MONTHS = 12;
    std::vector<std::string> monthNames = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    std::vector<double> monthlyRainfall(NUM_MONTHS);

    
    double totalRain = calculateTotal(monthlyRainfall);
    double averageRain = calculateAverage(monthlyRainfall);
    int highestMonthIdx = findHighestMonthIndex(monthlyRainfall);
    int lowestMonthIdx = findLowestMonthIndex(monthlyRainfall);

    

    return 0;
}

double calculateTotal(const std::vector<double>& rainfall) { ... }
double calculateAverage(const std::vector<double>& rainfall) { ... }
int findHighestMonthIndex(const std::vector<double>& rainfall) { ... }
// int findLowestMonthIndex(const std::vector<double>& rainfall) { ... }
