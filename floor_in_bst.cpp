#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void f(TreeNode<int> * root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    f(root->left,ans);
    ans.push_back(root->val);
    f(root->right,ans);
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    vector<int> ans;
    int w=0;
    f(root,ans);
    for(int i=0;i<ans.size();i++){
        if(ans[i]>X){
            break;
        }
        w=ans[i];
    }
    return w;
}