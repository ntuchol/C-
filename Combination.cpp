 #include <iostream>
 
    long long factorial(int n) {
        if (n == 0)
            return 1;
        long long res = 1;
        for (int i = 1; i <= n; ++i)
            res *= i;
        return res;
    }

    long long combinations(int n, int r) {
        if (r < 0 || r > n)
            return 0; 
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    int main() {
        int n = 5;
        int r = 2;
        std::cout << "Number of combinations (5 choose 2): " << combinations(n, r) << std::endl; 
        return 0;
    }
