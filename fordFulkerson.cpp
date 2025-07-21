// Basic structure for Ford-Fulkerson (Edmonds-Karp variant)
int fordFulkerson(const std::vector<std::vector<int>>& graph, int source, int sink) {
    int maxFlow = 0;
    std::vector<std::vector<int>> residualGraph = graph; // Initialize residual graph with capacities

    while (true) {
        // Find an augmenting path using BFS
        std::vector<int> parent(residualGraph.size(), -1);
        int pathFlow = bfs(residualGraph, source, sink, parent); // BFS returns bottleneck capacity

        if (pathFlow == 0) { // No augmenting path found
            break;
        }

        maxFlow += pathFlow;

        // Update residual graph based on pathFlow
        int v = sink;
        while (v != source) {
            int u = parent[v];
            residualGraph[u][v] -= pathFlow;
            residualGraph[v][u] += pathFlow; // Add flow to reverse edge
            v = u;
        }
    }
    return maxFlow;
}

// BFS function to find path and return bottleneck capacity
int bfs(std::vector<std::vector<int>>& residualGraph, int source, int sink, std::vector<int>& parent) {
    // ... BFS implementation to find path and min capacity ...
}