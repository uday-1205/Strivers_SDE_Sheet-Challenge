#include <bits/stdc++.h>
using namespace std;
vector<int> f(int level,TreeNode<int> *root){
    vector<int> ans;
    map<int,int> mp;
    if(root==NULL){
        return ans;
    }
    queue<pair<TreeNode<int> *,int>> q;
  q.push({root,0});
  while(!q.empty()){
      auto it=q.front();
      q.pop();
      TreeNode<int> *node=it.first;
      int line=it.second;
      if (mp.find(line) == mp.end()) {
        mp[line] = node->val;
      }
      if (node->left) {
          q.push({node->left,line-1});
      }
      if (node->right) {
          q.push({node->right,line+1});

      }
      
  }
  for(auto it:mp){
      ans.push_back(it.second);
  }
  return ans;
    
}
vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    return f(0,root);

}