int alphabeta(GameState state, int depth, int alpha, int beta, bool maximizingPlayer) {
    if (depth == 0 || state.isTerminal()) {
        return state.evaluate(); 
    }

    if (maximizingPlayer) {
        int bestValue = -infinity;
        for (Move move : state.getPossibleMoves()) {
            GameState newState = state.applyMove(move);
            bestValue = std::max(bestValue, alphabeta(newState, depth - 1, alpha, beta, false));
            alpha = std::max(alpha, bestValue);
            if (beta <= alpha) {
                break; 
            }
        }
        return bestValue;
    } else { 
        int bestValue = +infinity;
        for (Move move : state.getPossibleMoves()) {
            GameState newState = state.applyMove(move);
            bestValue = std::min(bestValue, alphabeta(newState, depth - 1, alpha, beta, true));
            beta = std::min(beta, bestValue);
            if (beta <= alpha) {
                break;             }
        }
        return bestValue;
    }
}
