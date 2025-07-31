// Pseudocode for Alpha-Beta Pruning in C++
int alphabeta(GameState state, int depth, int alpha, int beta, bool maximizingPlayer) {
    if (depth == 0 || state.isTerminal()) {
        return state.evaluate(); // Evaluate the terminal or leaf node
    }

    if (maximizingPlayer) {
        int bestValue = -infinity;
        for (Move move : state.getPossibleMoves()) {
            GameState newState = state.applyMove(move);
            bestValue = std::max(bestValue, alphabeta(newState, depth - 1, alpha, beta, false));
            alpha = std::max(alpha, bestValue);
            if (beta <= alpha) {
                break; // Beta cutoff
            }
        }
        return bestValue;
    } else { // Minimizing player
        int bestValue = +infinity;
        for (Move move : state.getPossibleMoves()) {
            GameState newState = state.applyMove(move);
            bestValue = std::min(bestValue, alphabeta(newState, depth - 1, alpha, beta, true));
            beta = std::min(beta, bestValue);
            if (beta <= alpha) {
                break; // Alpha cutoff
            }
        }
        return bestValue;
    }
}