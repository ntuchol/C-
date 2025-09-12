#include <iostream>

void fullAdder(int A, int B, int Cin, int& Sum, int& Cout) {
    Sum = Cin ^ (A ^ B); 
    Cout = (A & B) | (B & Cin) | (A & Cin); 
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
