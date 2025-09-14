#include <iostream>
#include <vector>
#include <queue>
#include <limits.h> 

bool bfs(const std::vector<std::vector<int>>& rGraph, int s, int t, std::vector<int>& parent) {
}

int fordFulkerson(std::vector<std::vector<int>> graph, int s, int t) {
    std::vector<std::vector<int>> rGraph = graph; 
    std::vector<int> parent(graph.size());
    int max_flow = 0;

    while (bfs(rGraph, s, t, parent)) {
        int path_flow = INT_MAX;
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            path_flow = std::min(path_flow, rGraph[u][v]);
        }

        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}
