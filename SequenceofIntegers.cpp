#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm> 

int main() {
    std::cout << "Enter a sequence of integers (terminate with non-integer input or EOF):\n";

    std::istream_iterator<int> input_it(std::cin);

    std::istream_iterator<int> end_of_stream;

    std::vector<int> numbers;

    std::copy(input_it, end_of_stream, std::back_inserter(numbers));

    std::cout << "\nNumbers read:\n";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
