void my_assembly_function() {
    asm volatile (
        "movl $1, %eax\n" 
        "ret\n"          
    );
}

int main() {
    my_assembly_function(); 
    return 0;
}

extern "C" void my_assembly_function_external(); 

    int main() {
        my_assembly_function_external(); 
        return 0;
    }
