#include <iostream>
#include <vector> 

double calculateAverage(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0.0; 
    }

    long long sum = 0; 
    for (int num : numbers) {
        sum += num;
    }

    return static_cast<double>(sum) / numbers.size();
}

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    double average = calculateAverage(data);

    std::cout << "The average is: " << average << std::endl;

    return 0;
}
