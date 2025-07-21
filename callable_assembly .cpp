// Example using GCC/Clang syntax
void my_assembly_function() {
    asm volatile (
        "movl $1, %eax\n" // Move 1 into EAX register
        "ret\n"          // Return from function
    );
}

int main() {
    my_assembly_function(); // Call the inline assembly routine
    return 0;
}

extern "C" void my_assembly_function_external(); // Declare external assembly function

    int main() {
        my_assembly_function_external(); // Call the external assembly routine
        return 0;
    }