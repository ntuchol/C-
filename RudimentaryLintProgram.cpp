#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    std::string line;
    int lineNum = 1;
    while (std::getline(file, line)) {
        if (line.find("if (") != std::string::npos && line.find(" = ") != std::string::npos && line.find(" == ") == std::string::npos) {
            std::cout << "Warning: Possible suspicious assignment on line " << lineNum << ": " << line << std::endl;
        }
        lineNum++;
    }

    file.close();
    return 0;
}
