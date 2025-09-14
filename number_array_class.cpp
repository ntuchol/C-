#include <vector>
#include <numeric> 

class NumberArray {
private:
    std::vector<float> numbers;

public:
    NumberArray(int size) : numbers(size) {}

    void addNumber(float num, int index) {
        if (index >= 0 && index < numbers.size()) {
            numbers[index] = num;
        }
    }

    float getNumber(int index) {
        if (index >= 0 && index < numbers.size()) {
            return numbers[index];
        }
        return 0.0f; 
    }

    int getSize() const {
        return numbers.size();
    }

    float getAverage() const {
        if (numbers.empty()) {
            return 0.0f;
        }
        float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
        return sum / numbers.size();
    }
};
