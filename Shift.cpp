int x = 5; // Binary: 00000101
int result = x << 2; // Shifts 2 positions left, result is 20 (Binary: 00010100)

unsigned int y = 20; // Binary: 00010100
unsigned int result_unsigned = y >> 2; // Shifts 2 positions right, result is 5 (Binary: 00000101)

int z = -20; // Binary (example, depends on system): 11101100 (two's complement)
int result_signed = z >> 2; // Implementation-defined, typically -5 (arithmetic shift)