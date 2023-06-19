#include <bits/stdc++.h> 
using namespace std;

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
void f(TreeNode *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    f(root->left,ans);
    
    f(root->right,ans);
    return;
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    f(root,ans);
    return ans;
}