    long long amount_in_cents = 123456; // Represents $1234.56
  struct Money {
        long long cents;
        // Add currency code, e.g., std::string currency_code;
    };
    #include <iostream>
    #include <iomanip>
    #include <locale>

    int main() {
        long long amount_in_cents = 123456; // $1234.56

        std::cout.imbue(std::locale("en_US.UTF-8")); // Set locale for US formatting
        std::cout << "Amount: " << std::put_money(amount_in_cents) << std::endl;
        return 0;
    }