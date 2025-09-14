#include <iostream>
#include <cmath> 
double calculateAverage(double score1, double score2, double score3, double score4) {
    return (score1 + score2 + score3 + score4) / 4.0;
}

double calculateStandardDeviation(double score1, double score2, double score3, double score4) {
    double mean = calculateAverage(score1, score2, score3, score4);
    double sumSquaredDiff = std::pow(score1 - mean, 2) +
                            std::pow(score2 - mean, 2) +
                            std::pow(score3 - mean, 2) +
                            std::pow(score4 - mean, 2);
    return std::sqrt(sumSquaredDiff / 4.0); 
}

int main() {
    double s1, s2, s3, s4;

    std::cout << "Enter four scores:" << std::endl;
    std::cout << "Score 1: ";
    std::cin >> s1;
    std::cout << "Score 2: ";
    std::cin >> s2;
    std::cout << "Score 3: ";
    std::cin >> s3;
    std::cout << "Score 4: ";
    std::cin >> s4;

    double average = calculateAverage(s1, s2, s3, s4);
    double stdDev = calculateStandardDeviation(s1, s2, s3, s4);

    std::cout << "\nAverage of scores: " << average << std::endl;
    std::cout << "Standard Deviation of scores: " << stdDev << std::endl;

    return 0;
}
