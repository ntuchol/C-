#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   
std::vector<int> generateLotteryNumbers(int count, int max_value) {
    std::vector<int> numbers;
    srand(time(0)); 
    while (numbers.size() < count) {
        int num = (rand() % max_value) + 1; 
        bool is_duplicate = false;
        for (int existing_num : numbers) {
            if (existing_num == num) {
                is_duplicate = true;
                break;
            }
        }
        if (!is_duplicate) {
            numbers.push_back(num);
        }
    }
    return numbers;
}

int main() {
    int num_to_draw = 6;
    int max_lottery_value = 49;

    std::cout << "Generating winning lottery numbers..." << std::endl;
    std::vector<int> winning_numbers = generateLotteryNumbers(num_to_draw, max_lottery_value);

    std::cout << "The winning numbers are: ";
    for (int num : winning_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
