  int rows = 3;
    int cols = 4;

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    matrix[0][0] = 10;

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i]; 
    }
    delete[] matrix; 
