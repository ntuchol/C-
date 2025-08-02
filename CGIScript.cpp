#include <iostream>

    int main() {
        std::cout << "Content-type: text/html\n\n"; // Header and blank line
        std::cout << "<html><body><h1>Hello from C++ CGI!</h1></body></html>\n";
        return 0;
    }