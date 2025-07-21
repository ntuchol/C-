 #include <iostream>

    int main() {
        int n;
        long long sum = 0; // Use long long for potentially large sums

        std::cout << "Enter a positive integer (n): ";
        std::cin >> n;

        if (n < 1) {
            std::cout << "Please enter a positive integer." << std::endl;
            return 1; // Indicate an error
        }

        for (int i = 1; i <= n; ++i) {
            sum += i; // Add each number to the sum
        }

        std::cout << "Sum of whole numbers up to " << n << " is: " << sum << std::endl;

        return 0;
    }