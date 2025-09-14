#include <fstream>

    std::ofstream outFile("data.bin", std::ios::out | std::ios::binary);

    std::ifstream inFile("data.bin", std::ios::in | std::ios::binary);

    std::fstream rwFile("data.bin", std::ios::in | std::ios::out | std::ios::binary);

    int value = 123;
    outFile.write(reinterpret_cast<char*>(&value), sizeof(value));
    int readValue;
    inFile.read(reinterpret_cast<char*>(&readValue), sizeof(readValue));
    outFile.close();
    inFile.close();
