#include <iostream>
#include <string>
#include <vector>

// Define a constant for the alphabet size (e.g., for ASCII characters)
#define d 256

void rabinKarp(const std::string& text, const std::string& pattern, int q) {
    int n = text.length();
    int m = pattern.length();
    int i, j;
    long long p_hash = 0; // hash value for pattern
    long long t_hash = 0; // hash value for text window
    long long h = 1;      // d^(m-1) % q

    // Calculate h = d^(m-1) % q
    for (i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    // Calculate the hash value of pattern and first text window
    for (i = 0; i < m; i++) {
        p_hash = (d * p_hash + pattern[i]) % q;
        t_hash = (d * t_hash + text[i]) % q;
    }

    // Slide the pattern over the text one by one
    for (i = 0; i <= n - m; i++) {
        // If hash values match, then check character by character
        if (p_hash == t_hash) {
            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    break;
                }
            }
            if (j == m) {
                std::cout << "Pattern found at index " << i << std::endl;
            }
        }

        // Calculate hash value for the next window of text
        if (i < n - m) {
            t_hash = (d * (t_hash - text[i] * h) + text[i + m]) % q;
            // Ensure t_hash remains positive
            if (t_hash < 0) {
                t_hash = (t_hash + q);
            }
        }
    }
}

// int main() {
//     std::string text = "GEEKSFORGEEKS";
//     std::string pattern = "GEEK";
//     int q = 101; // A prime number
//     rabinKarp(text, pattern, q);
//     return 0;
// }