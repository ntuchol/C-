int minimax(BoardState board, int depth, bool maximizingPlayer, int alpha, int beta) {
    // Base case: if depth is 0 or game is over, return evaluation of the board
    if (depth == 0 || board.isGameOver()) {
        return board.evaluate();
    }

    if (maximizingPlayer) {
        int bestValue = -infinity; // Represents negative infinity
        for (Move move : board.getPossibleMoves()) {
            BoardState newBoard = board.makeMove(move);
            int value = minimax(newBoard, depth - 1, false, alpha, beta);
            bestValue = std::max(bestValue, value);
            alpha = std::max(alpha, bestValue); // Update alpha
            if (beta <= alpha) { // Alpha-beta pruning condition
                break; // Prune the remaining branches
            }
        }
        return bestValue;
    } else { // Minimizing player
        int bestValue = +infinity; // Represents positive infinity
        for (Move move : board.getPossibleMoves()) {
            BoardState newBoard = board.makeMove(move);
            int value = minimax(newBoard, depth - 1, true, alpha, beta);
            bestValue = std::min(bestValue, value);
            beta = std::min(beta, bestValue); // Update beta
            if (beta <= alpha) { // Alpha-beta pruning condition
                break; // Prune the remaining branches
            }
        }
        return bestValue;
    }
}