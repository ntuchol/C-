int x;
        x[0] = 5; // Error: x is an int, not an array or pointer
int arr[5];
        arr[5] = 10; // Out of bounds access for a 0-indexed array of size 5
char a[10][]; // Error: missing subscript for the second dimension
