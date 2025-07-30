#define SWAP_TEMP(type, a, b) \
    do {                      \
        type temp = (a);      \
        (a) = (b);            \
        (b) = temp;           \
    } while (0)
    
int x = 5, y = 10;
SWAP_TEMP(int, x, y); // Swaps x and y