#include <vector>
#include <iostream>

bool detectCycleDFS(int u, int parent, const std::vector<std::vector<int>>& adj, std::vector<bool>& visited) {
    visited[u] = true;

    for (int v : adj[u]) {
        if (!visited[v]) {
            if (detectCycleDFS(v, u, adj, visited)) {
                return true; 
            }
        } else if (v != parent) {
            return true; 
        }
    }
    return false; 
}

bool hasCycleUndirected(int numNodes, const std::vector<std::vector<int>>& adj) {
    std::vector<bool> visited(numNodes, false);
    for (int i = 0; i < numNodes; ++i) {
        if (!visited[i]) {
            if (detectCycleDFS(i, -1, adj, visited)) { 
                return true;
            }
        }
    }
    return false;
}

#include <vector>
#include <iostream>

bool detectCycleDFS_Directed(int u, const std::vector<std::vector<int>>& adj, std::vector<int>& visited) {
    visited[u] = 1; 
    for (int v : adj[u]) {
        if (visited[v] == 0) { 
            if (detectCycleDFS_Directed(v, adj, visited)) {
                return true; 
            }
        } else if (visited[v] == 1) { 
            return true; 
        }
    }
    visited[u] = 2; 
    return false;
}

bool hasCycleDirected(int numNodes, const std::vector<std::vector<int>>& adj) {
    std::vector<int> visited(numNodes, 0); 
    for (int i = 0; i < numNodes; ++i) {
        if (visited[i] == 0) {
            if (detectCycleDFS_Directed(i, adj, visited)) {
                return true;
            }
        }
    }
    return false;
