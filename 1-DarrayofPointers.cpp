#include <stdio.h>

int main() {
    char *strings[3]; 
    size_t num_pointers = sizeof(strings) / sizeof(strings[0]); 
    size_t size_of_one_pointer = sizeof(char*); 

    printf("Number of pointers: %zu\n", num_pointers); 
    printf("Size of one pointer: %zu bytes\n", size_of_one_pointer); 
    printf("Total size of the array: %zu bytes\n", num_pointers * size_of_one_pointer); 

    return 0;
}
