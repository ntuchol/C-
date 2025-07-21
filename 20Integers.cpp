#include <iostream>  // For input/output operations like cout
#include <fstream>   // For file stream operations (ofstream, ifstream)
#include <vector>    // For using std::vector to store integers
#include <numeric>   // For std::iota (to populate the vector with sequential numbers)

int main() {
    const int NUM_INTEGERS = 20; // Number of integers to write

    // --- Writing to a binary file ---
    std::ofstream outFile("integers.bin", std::ios::out | std::ios::binary); // Open file in output and binary mode
    if (!outFile.is_open()) { // Check if the file opened successfully
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1; // Indicate an error
    }

    std::vector<int> data(NUM_INTEGERS); // Create a vector to hold the integers
    std::iota(data.begin(), data.end(), 1); // Fill the vector with numbers 1 to 20

    // Write the entire vector (raw bytes) to the file
    outFile.write(reinterpret_cast<const char*>(data.data()), data.size() * sizeof(int)); // reinterpret_cast to (char*) is needed because write expects a char* pointer. data.data() gets a pointer to the underlying array of the vector.
    outFile.close(); // Close the file

    std::cout << "20 integers written to integers.bin (binary mode)." << std::endl;

    // --- Reading from the binary file ---
    std::ifstream inFile("integers.bin", std::ios::in | std::ios::binary); // Open file in input and binary mode
    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    std::vector<int> readData(NUM_INTEGERS); // Create a vector to store the read integers

    // Read the raw bytes into the vector
    inFile.read(reinterpret_cast<char*>(readData.data()), readData.size() * sizeof(int));
    inFile.close(); // Close the file

    std::cout << "Integers read from file: ";
    for (int num : readData) { // Iterate and print each read integer
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0; // Indicate successful execution
}