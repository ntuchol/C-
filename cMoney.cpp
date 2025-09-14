#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

int main() {
    std::locale::global(std::locale("en_US.UTF-8"));

    long long cents = 12345; 

    std::cout << "Amount: " << std::put_money(cents) << std::endl;

    return 0;
}
