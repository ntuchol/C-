#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set> // For keeping track of visited nodes

// Assuming an adjacency list representation for the graph
// For example: unordered_map<int, vector<int>> graph;

void bfs(const std::vector<std::vector<int>>& adj, int startNode) {
    int numNodes = adj.size();
    std::vector<bool> visited(numNodes, false); // To keep track of visited nodes
    std::queue<int> q;

    // Start BFS from the given startNode
    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();

        // Process the current node (e.g., print it)
        std::cout << currentNode << " ";

        // Enqueue unvisited neighbors
        for (int neighbor : adj[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    // Example usage with an adjacency list representation
    // Represents a graph with 6 nodes
    std::vector<std::vector<int>> adj = {
        {1, 2},      // Neighbors of node 0
        {0, 3, 4},   // Neighbors of node 1
        {0, 5},      // Neighbors of node 2
        {1},         // Neighbors of node 3
        {1},         // Neighbors of node 4
        {2}          // Neighbors of node 5
    };

    std::cout << "BFS Traversal starting from node 0: ";
    bfs(adj, 0);
    std::cout << std::endl;

    return 0;
}