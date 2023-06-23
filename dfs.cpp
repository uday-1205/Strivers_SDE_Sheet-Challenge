#include<bits/stdc++.h>
using namespace std;
void f(int ind,vector<int> adj[], vector<int> &temp,int vis[] ){
    vis[ind]=1;
    temp.push_back(ind);
    for(auto it:adj[ind]){
       if(!vis[it]){
           f(it,adj,temp,vis);
       }

    }
    return;
   
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> adj[V];
    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[V]={0};
    vector<vector<int>> ans;
for(int i=0;i<V;i++){
    if(!vis[i]){
        vector<int> temp;
        f(i,adj,temp, vis);
        ans.push_back(temp);

    }
}

  return ans;  
}