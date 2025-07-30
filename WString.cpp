#include <iostream>
#include <string>

int main() {
    std::wstring wstr = L"Hello, world! 🌍"; // Initialize with a wide string literal
    std::wcout << wstr << std::endl; // Print using wide character output stream
    return 0;
}