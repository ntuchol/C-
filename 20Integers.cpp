#include <iostream>  
#include <fstream>   
#include <vector>    
#include <numeric>   

int main() {
    const int NUM_INTEGERS = 20;

    std::ofstream outFile("integers.bin", std::ios::out | std::ios::binary); 
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1; 
    }

    std::vector<int> data(NUM_INTEGERS); 
    std::iota(data.begin(), data.end(), 1); 

    outFile.write(reinterpret_cast<const char*>(data.data()), data.size() * sizeof(int)); 
    outFile.close(); 

    std::cout << "20 integers written to integers.bin (binary mode)." << std::endl;

    
    std::ifstream inFile("integers.bin", std::ios::in | std::ios::binary); 
    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    std::vector<int> readData(NUM_INTEGERS); 
    inFile.read(reinterpret_cast<char*>(readData.data()), readData.size() * sizeof(int));
    inFile.close(); 

    std::cout << "Integers read from file: ";
    for (int num : readData) { 
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0; 
}
