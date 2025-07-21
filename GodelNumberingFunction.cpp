  #include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to calculate the nth prime number (simple implementation for demonstration)
long long nth_prime(int n) {
    if (n <= 0) return -1;
    long long num = 2;
    int count = 0;
    while (count < n) {
        bool is_prime = true;
        for (long long i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            count++;
        }
        if (count < n) {
          num++;
        }
    }
    return num;
}

// Function to encode a string (formula) using Gödel numbering
long long encode_formula(const string& formula, const map<char, int>& symbol_map) {
    long long encoded_number = 1;
    for (size_t i = 0; i < formula.length(); ++i) {
        char symbol = formula[i];
        if (symbol_map.count(symbol) > 0) {
            int symbol_code = symbol_map.at(symbol);
            long long prime = nth_prime(i + 1);
            encoded_number *= pow(prime, symbol_code);
        } else {
            // Handle unknown symbols (e.g., return an error code or throw an exception)
            cerr << "Error: Unknown symbol: " << symbol << endl;
            return -1; // Or throw an exception
        }
    }
    return encoded_number;
}

int main() {
    // Define a simple symbol map
    map<char, int> symbol_map = {
        {'0', 2},
        {'s', 3},
        {'~', 5},
        {'|', 7},
        {'A', 11},
        {'(', 13},
        {')', 17}
    };

    string formula = "A(s0)";
    long long godel_number = encode_formula(formula, symbol_map);

    if (godel_number != -1) {
        cout << "Gödel number for '" << formula << "': " << godel_number << endl;
    }

    return 0;
}