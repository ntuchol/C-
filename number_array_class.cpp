#include <vector>
#include <numeric> // For std::accumulate

class NumberArray {
private:
    std::vector<float> numbers;

public:
    // Constructor
    NumberArray(int size) : numbers(size) {}

    // Store a number
    void addNumber(float num, int index) {
        if (index >= 0 && index < numbers.size()) {
            numbers[index] = num;
        }
        // Handle out-of-bounds error if needed
    }

    // Retrieve a number
    float getNumber(int index) {
        if (index >= 0 && index < numbers.size()) {
            return numbers[index];
        }
        // Handle out-of-bounds error, e.g., throw an exception
        return 0.0f; // Or some default value
    }

    // Get size
    int getSize() const {
        return numbers.size();
    }

    // Calculate average
    float getAverage() const {
        if (numbers.empty()) {
            return 0.0f;
        }
        float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
        return sum / numbers.size();
    }
};