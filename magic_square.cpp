    #include <iostream>
    #include <vector>

    void generateMagicSquare(int n) {
        if (n % 2 == 0) {
            std::cout << "This program only generates odd-ordered magic squares." << std::endl;
            return;
        }

        std::vector<std::vector<int>> magicSquare(n, std::vector<int>(n, 0));

        int i = n / 2; 
        int j = n - 1; 
        
        for (int num = 1; num <= n * n; ) {
            if (i == -1 && j == n) { 
                j = n - 2;
                i = 0;
            } else {
                if (j == n) 
                    j = 0;
                if (i < 0) 
                    i = n - 1;
            }

            if (magicSquare[i][j] != 0) { 
                j -= 2;
                i++;
                continue;
            } else {
                magicSquare[i][j] = num++;
            }

            i--; j++; 
        }

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                std::cout << magicSquare[row][col] << "\t";
            }
            std::cout << std::endl;
        }
    }

    int main() {
        int n;
        std::cout << "Enter the order of the magic square (odd number): ";
        std::cin >> n;
        generateMagicSquare(n);
        return 0;
    }
