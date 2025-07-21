#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm> // For std::copy

int main() {
    std::cout << "Enter a sequence of integers (terminate with non-integer input or EOF):\n";

    // Create an istream_iterator for integers associated with std::cin
    std::istream_iterator<int> input_it(std::cin);

    // Create an end-of-stream iterator
    std::istream_iterator<int> end_of_stream;

    // Create a vector to store the read integers
    std::vector<int> numbers;

    // Use std::copy to read integers from the input stream and store them in the vector
    // This copies elements from the range [input_it, end_of_stream) to the back_inserter of 'numbers'
    std::copy(input_it, end_of_stream, std::back_inserter(numbers));

    std::cout << "\nNumbers read:\n";
    // Iterate through the vector and print the read numbers
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}