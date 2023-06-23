#include <bits/stdc++.h> 
#include <bits/stdc++.h>

void bfs(int start, std::vector<std::vector<int>>& adj, std::vector<int>& visited, std::vector<int>& ans) {
    std::queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

std::vector<int> BFS(int vertex, std::vector<std::pair<int, int>>& edges) {
    std::vector<std::vector<int>> adj(vertex);
    std::vector<int> ans;
    std::vector<int> visited(vertex, false);

    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 for(int i = 0; i < vertex; i++){

        sort(adj[i].begin(), adj[i].end());

    }
    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            bfs(i, adj, visited, ans);
        }
    }

    return ans;
}
