#include <vector>
#include <iostream>

bool detectCycleDFS(int u, int parent, const std::vector<std::vector<int>>& adj, std::vector<bool>& visited) {
    visited[u] = true;

    for (int v : adj[u]) {
        if (!visited[v]) {
            if (detectCycleDFS(v, u, adj, visited)) {
                return true; // Cycle found in a deeper recursion
            }
        } else if (v != parent) {
            return true; // Cycle detected: visited node is not the parent
        }
    }
    return false; // No cycle found in this branch
}

bool hasCycleUndirected(int numNodes, const std::vector<std::vector<int>>& adj) {
    std::vector<bool> visited(numNodes, false);
    for (int i = 0; i < numNodes; ++i) {
        if (!visited[i]) {
            if (detectCycleDFS(i, -1, adj, visited)) { // -1 as initial parent
                return true;
            }
        }
    }
    return false;
}

#include <vector>
#include <iostream>

bool detectCycleDFS_Directed(int u, const std::vector<std::vector<int>>& adj, std::vector<int>& visited) {
    visited[u] = 1; // Mark as currently visiting (in recursion stack)

    for (int v : adj[u]) {
        if (visited[v] == 0) { // Not visited
            if (detectCycleDFS_Directed(v, adj, visited)) {
                return true; // Cycle found in a deeper recursion
            }
        } else if (visited[v] == 1) { // Visited and in current recursion stack
            return true; // Cycle detected (back edge)
        }
    }
    visited[u] = 2; // Mark as finished visiting
    return false; // No cycle found in this branch
}

bool hasCycleDirected(int numNodes, const std::vector<std::vector<int>>& adj) {
    std::vector<int> visited(numNodes, 0); // 0: unvisited, 1: visiting, 2: visited
    for (int i = 0; i < numNodes; ++i) {
        if (visited[i] == 0) {
            if (detectCycleDFS_Directed(i, adj, visited)) {
                return true;
            }
        }
    }
    return false;