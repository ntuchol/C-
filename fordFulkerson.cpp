int fordFulkerson(const std::vector<std::vector<int>>& graph, int source, int sink) {
    int maxFlow = 0;
    std::vector<std::vector<int>> residualGraph = graph; 
    while (true) {
        std::vector<int> parent(residualGraph.size(), -1);
        int pathFlow = bfs(residualGraph, source, sink, parent); 
        if (pathFlow == 0) { 
            break;
        }

        maxFlow += pathFlow;

        int v = sink;
        while (v != source) {
            int u = parent[v];
            residualGraph[u][v] -= pathFlow;
            residualGraph[v][u] += pathFlow;
            v = u;
        }
    }
    return maxFlow;
}

int bfs(std::vector<std::vector<int>>& residualGraph, int source, int sink, std::vector<int>& parent) {
}
