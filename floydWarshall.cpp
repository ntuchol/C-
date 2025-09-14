#include <iostream>
#include <vector>
#include <algorithm> 
const int INF = 1e9;

void floydWarshall(std::vector<std::vector<int>>& graph) {
    int V = graph.size();
    std::vector<std::vector<int>> dist = graph; 
    
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] != INF && dist[k][j] != INF) { 
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    std::cout << "Shortest distances between all pairs of vertices:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF) {
                std::cout << "INF\t";
            } else {
                std::cout << dist[i][j] << "\t";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };

    floydWarshall(graph);

