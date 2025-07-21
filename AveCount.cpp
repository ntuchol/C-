 #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> numbers = {10, 20, 30, 40, 50};
        double sum = 0.0;
        int count = 0;

        for (int num : numbers) {
            sum += num;
            count++;
        }

        if (count > 0) {
            double average = sum / count;
            std::cout << "Average: " << average << std::endl;
        } else {
            std::cout << "No numbers to average." << std::endl;
        }

        return 0;
    }