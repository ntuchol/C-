bool solveMaze(int currentRow, int currentCol, Maze& maze, Visited& visited) {
    // Base cases:
    // 1. If out of bounds or hit a wall, return false.
    // 2. If already visited, return false.
    // 3. If at the goal, return true.

    // Mark current cell as visited.

    // Try moving in all four directions (up, down, left, right):
    // If a move is valid and leads to a solution (recursive call returns true),
    // then this path works, return true.

    // If no direction leads to a solution, unmark current cell (backtrack)
    // and return false.
}

void solveMazeBFS(int startRow, int startCol, Maze& maze, Queue& q, Visited& visited, ParentMap& parent) {
    // Add starting cell to queue and mark as visited.

    // While queue is not empty:
    //   Dequeue a cell.
    //   If it's the goal, reconstruct path and return.

    //   For each unvisited, valid neighbor:
    //     Mark as visited, set its parent, and enqueue it.
} 

