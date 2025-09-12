#include <fstream>
    ofstream outFile("example.txt"); 
    ifstream inFile("data.txt");
    if (!outFile.is_open()) {
    }
    if (!inFile) {
    }
        outFile << "Hello, C++ File Handling!" << endl;
    string line;
    getline(inFile, line); 
    outFile.close();
    inFile.close();
