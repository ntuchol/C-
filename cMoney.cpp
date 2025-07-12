#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

int main() {
    // Set the locale to en_US for demonstration purposes
    std::locale::global(std::locale("en_US.UTF-8"));

    long long cents = 12345; // Represents $123.45

    std::cout << "Amount: " << std::put_money(cents) << std::endl;

    return 0;
}