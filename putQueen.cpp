bool putQueen(int board[][N], int row) {
    if (row >= N) { 
        printSolution(board); 
        return true; 
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1; 
            if (putQueen(board, row + 1)) { 
                return true; 
            }
            board[row][col] = 0; 
        }
    }
    return false; 
}
