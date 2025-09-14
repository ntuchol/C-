int minimax(BoardState board, int depth, bool maximizingPlayer, int alpha, int beta) {
    if (depth == 0 || board.isGameOver()) {
        return board.evaluate();
    }

    if (maximizingPlayer) {
        int bestValue = -infinity; 
        for (Move move : board.getPossibleMoves()) {
            BoardState newBoard = board.makeMove(move);
            int value = minimax(newBoard, depth - 1, false, alpha, beta);
            bestValue = std::max(bestValue, value);
            alpha = std::max(alpha, bestValue); 
            if (beta <= alpha) { 
                break; 
            }
        }
        return bestValue;
    } else { 
        int bestValue = +infinity; 
        for (Move move : board.getPossibleMoves()) {
            BoardState newBoard = board.makeMove(move);
            int value = minimax(newBoard, depth - 1, true, alpha, beta);
            bestValue = std::min(bestValue, value);
            beta = std::min(beta, bestValue); 
            if (beta <= alpha) {
                break; 
            }
        }
        return bestValue;
    }
}
