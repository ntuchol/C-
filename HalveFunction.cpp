double half(double number) {
    double result = number / 2.0;
    return result;
}

double half(int number) {
    double result = static_cast<double>(number) / 2.0; 
    return result;
}

void halveUntilOne(double& number) { 
    while (number > 1.0) {
        number /= 2.0;
    }
}

int main() {
    double originalNumber = 10.0;
    double halvedValue = half(originalNumber);
    std::cout << "Half of " << originalNumber << " is " << halvedValue << std::endl;

    double iterativeNumber = 20.0;
    halveUntilOne(iterativeNumber);
    std::cout << "Final value after iterative halving: " << iterativeNumber << std::endl;

   
