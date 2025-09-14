#include <fstream>
#include <iostream>

int main() {
    std::fstream file("example.bin", std::ios::in | std::ios::out | std::ios::binary);

    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    file.write("Hello", 5);
    file.write("World", 5);

    file.seekg(0, std::ios::beg);
    char buffer[6];
    file.read(buffer, 5);
    buffer[5] = '\0';
    std::cout << "Read from beginning: " << buffer << std::endl;

    file.seekg(5, std::ios::beg);
    file.read(buffer, 5);
    buffer[5] = '\0';
    std::cout << "Read from offset 5: " << buffer << std::endl;

    file.seekp(5, std::ios::beg);
    file.write("There", 5);

    file.seekg(0, std::ios::beg);
    char full_buffer[11];
    file.read(full_buffer, 10);
    full_buffer[10] = '\0';
    std::cout << "Full content after modification: " << full_buffer << std::endl;

    file.close();
    return 0;
}
