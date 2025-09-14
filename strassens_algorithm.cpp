Matrix add(const Matrix& A, const Matrix& B);
Matrix subtract(const Matrix& A, const Matrix& B);

Matrix strassenMultiply(const Matrix& A, const Matrix& B) {
    int n = A.rows(); 
    if (n <= THRESHOLD) {
        return naiveMultiply(A, B);
    }

    Matrix A11, A12, A21, A22; 
    Matrix P1 = strassenMultiply(add(A11, A22), add(B11, B22));

    Matrix C11 = add(subtract(add(P1, P4), P5), P7);
    return C;
}
