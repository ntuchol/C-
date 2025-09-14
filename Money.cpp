    long long amount_in_cents = 123456; 
  struct Money {
        long long cents;
    };
    #include <iostream>
    #include <iomanip>
    #include <locale>

    int main() {
        long long amount_in_cents = 123456; 

        std::cout.imbue(std::locale("en_US.UTF-8")); 
        std::cout << "Amount: " << std::put_money(amount_in_cents) << std::endl;
        return 0;
    }
