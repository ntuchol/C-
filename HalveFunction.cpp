double half(double number) {
    double result = number / 2.0;
    return result;
}

double half(int number) {
    double result = static_cast<double>(number) / 2.0; // Cast to double for accurate division
    return result;
}

void halveUntilOne(double& number) { // Pass by reference to modify the original number
    while (number > 1.0) {
        number /= 2.0;
        // Optional: print the current halved value
        // std::cout << "Current half: " << number << std::endl;
    }
}

int main() {
    double originalNumber = 10.0;
    double halvedValue = half(originalNumber);
    std::cout << "Half of " << originalNumber << " is " << halvedValue << std::endl;

    double iterativeNumber = 20.0;
    halveUntilOne(iterativeNumber);
    std::cout << "Final value after iterative halving: " << iterativeNumber << std::endl;

   