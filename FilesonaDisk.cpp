#include <fstream>
    // ...
    ofstream outFile("example.txt"); // Opens "example.txt" for writing
    ifstream inFile("data.txt");
    if (!outFile.is_open()) {
        // Handle error
    }
    // Or:
    if (!inFile) {
        // Handle error
    }
        outFile << "Hello, C++ File Handling!" << endl;
    string line;
    getline(inFile, line); // Reads a line into 'line'
    outFile.close();
    inFile.close();