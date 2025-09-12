#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set> 

void bfs(const std::vector<std::vector<int>>& adj, int startNode) {
    int numNodes = adj.size();
    std::vector<bool> visited(numNodes, false); 
    std::queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();

        std::cout << currentNode << " ";

        for (int neighbor : adj[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> adj = {
        {1, 2},     
        {0, 3, 4},   
        {0, 5},      
        {1},         
        {1},         
        {2}          
    };

    std::cout << "BFS Traversal starting from node 0: ";
    bfs(adj, 0);
    std::cout << std::endl;

    return 0;
}
