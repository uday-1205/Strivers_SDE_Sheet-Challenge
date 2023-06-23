#include<bits/stdc++.h>
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
    int n = edges.size();
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(edges[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    queue<int>q;
    vector<bool>vis(n,false);
    vector<char>color(n,'w');
    for(int i=0;i<n;i++){
        if(vis[i]==false){
            q.push(i);
            color[i]='r';
            while(!q.empty()){
                int x = q.front();
                q.pop();
                if(vis[x]==true)continue;
                vis[x]=true;
                char c = color[x];
                for(auto&v:adj[x]){
                    if(color[v]==c)return false;
                    color[v] = (c=='r')?'b':'r';
                    q.push(v);
                }
            }
        }
    }
    return true;
}