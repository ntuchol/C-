  int rows = 3;
    int cols = 4;

    // Allocate an array of pointers to int
    int** matrix = new int*[rows];

    // Allocate memory for each row
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Access and manipulate elements
    matrix[0][0] = 10;

    // Deallocate memory (important to avoid memory leaks)
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i]; // Delete each row
    }
    delete[] matrix; // Delete the array of pointers