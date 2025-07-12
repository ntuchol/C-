#include <stdio.h>

int main() {
    char *strings[3]; // An array of 3 character pointers
    size_t num_pointers = sizeof(strings) / sizeof(strings[0]); // Number of pointers
    size_t size_of_one_pointer = sizeof(char*); // Size of a single pointer

    printf("Number of pointers: %zu\n", num_pointers); // Output: 3
    printf("Size of one pointer: %zu bytes\n", size_of_one_pointer); // Output: 8 bytes
    printf("Total size of the array: %zu bytes\n", num_pointers * size_of_one_pointer); // Output: 24 bytes

    return 0;
}