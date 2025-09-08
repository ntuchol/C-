#include <iostream>
#include <algorithm> 
#include <limits>  

int evaluate_board(int board_state) {
     return board_state;
}

int minimax(int board_state, int depth, bool is_maximizing_player, int alpha, int beta) {
    if (depth == 0 /* || is_terminal_node(board_state) */) {
        return evaluate_board(board_state);
    }

    if (is_maximizing_player) {
        int best_value = std::numeric_limits<int>::min(); 
        for (int i = 0; i < 3; ++i) { 
            int child_state = board_state + (i + 1);
            int value = minimax(child_state, depth - 1, false, alpha, beta);
            best_value = std::max(best_value, value);
            alpha = std::max(alpha, best_value);
            if (beta <= alpha) {
                break; 
            }
        }
        return best_value;
    } else { 
        int best_value = std::numeric_limits<int>::max(); 
        for (int i = 0; i < 3; ++i) { 
            int child_state = board_state - (i + 1); 
            int value = minimax(child_state, depth - 1, true, alpha, beta);
            best_value = std::min(best_value, value);
            beta = std::min(beta, best_value);
            if (beta <= alpha) {
                break; 
            }
        }
        return best_value;
    }
}

int main() {
    int initial_board_state = 10; 
    int search_depth = 3;        

    int optimal_value = minimax(initial_board_state, search_depth, true,
                                std::numeric_limits<int>::min(), std::numeric_limits<int>::max());

    std::cout << "Optimal value found by Alpha-Beta Minimax: " << optimal_value << std::endl;

    return 0;
