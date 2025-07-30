// Array of 'long' integers
long numbers[10]; 

// Array of 'long long' integers for even larger values
long long big_numbers[5]; 

// Dynamically allocated large array of 'long long'
long long* very_large_array = new long long[1000000000]; 

// ... use the array ...

// Deallocate memory when no longer needed
delete[] very_large_array;