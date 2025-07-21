#include <iostream>

// Function to simulate a full adder
void fullAdder(int A, int B, int Cin, int& Sum, int& Cout) {
    Sum = Cin ^ (A ^ B); // XOR for sum calculation
    Cout = (A & B) | (B & Cin) | (A & Cin); // AND and OR for carry-out calculation
}

int main() {
    int A = 1;
    int B = 0;
    int Cin = 1;
    int Sum, Cout;

    fullAdder(A, B, Cin, Sum, Cout);

    std::cout << "Input: A=" << A << ", B=" << B << ", Cin=" << Cin << std::endl;
    std::cout << "Output: Sum=" << Sum << ", Cout=" << Cout << std::endl;

    return 0;
}