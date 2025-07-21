bool putQueen(int board[][N], int row) {
    if (row >= N) { // Base case: All queens placed
        printSolution(board); // Print the solution
        return true; 
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1; // Place the queen
            if (putQueen(board, row + 1)) { // Recurse for the next row
                return true; 
            }
            board[row][col] = 0; // Backtrack: Remove the queen
        }
    }
    return false; // No solution found for this branch
}