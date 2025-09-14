#include <vector>
#include <queue>
#include <set>
#include <map> 

struct State {
    std::vector<std::vector<int>> board;
    int blank_row, blank_col;
    int moves; 
    int heuristic_cost; 
};

int calculateManhattanDistance(const std::vector<std::vector<int>>& board);

std::vector<State> generateNextStates(const State& current_state);

State solvePuzzle(const State& initial_state, const State& goal_state) {
}

int main() {
    return 0;
} 
