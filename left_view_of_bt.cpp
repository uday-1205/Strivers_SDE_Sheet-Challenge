#include <bits/stdc++.h> 
using namespace std;
    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


void f(int level,TreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    f(level+1,root->left,ans);
    f(level+1,root->right,ans);
    return;
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    f(0,root,ans);
    return ans;
}