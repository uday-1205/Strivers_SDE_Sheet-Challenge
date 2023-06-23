#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
        
        vector<int>adj[v];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
        }
      int inDegree[v]={0};
      for(int i=0;i<v;++i){
      for(auto it:adj[i]){
           inDegree[it]++;
        }
      }
      queue<int>q;
      for(int i=0;i<v;++i){
          if(inDegree[i]==0){
              q.push(i);
          }
      }
       vector<int>topo;
       while(!q.empty()){
           int node=q.front();
           q.pop();
           topo.push_back(node);
          for(auto it:adj[node]){
            inDegree[it]--;
            if(inDegree[it]==0)q.push(it);
          }
       }
       return topo;
}