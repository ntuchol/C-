#include <iostream>
#include <string>
#include <vector>

#define d 256

void rabinKarp(const std::string& text, const std::string& pattern, int q) {
    int n = text.length();
    int m = pattern.length();
    int i, j;
    long long p_hash = 0; 
    long long t_hash = 0; 
    long long h = 1;      
    
    for (i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    for (i = 0; i < m; i++) {
        p_hash = (d * p_hash + pattern[i]) % q;
        t_hash = (d * t_hash + text[i]) % q;
    }

    for (i = 0; i <= n - m; i++) {
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

        if (i < n - m) {
            t_hash = (d * (t_hash - text[i] * h) + text[i + m]) % q;
            if (t_hash < 0) {
                t_hash = (t_hash + q);
            }
        }
    }
}

int main() {
   std::string text = "GEEKSFORGEEKS";
   std::string pattern = "GEEK";
   int q = 101; 
   rabinKarp(text, pattern, q);
return 0;
}
