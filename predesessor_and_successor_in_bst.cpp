#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void f(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    f(root->left,ans);
    ans.push_back(root->data);
    f(root->right,ans);
    return;
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<int> ans;
    f(root,ans);
    int i=0;
    int n=ans.size();

    while(i<n && ans[i]!=key){
        i++;
    }
    int predecessor = (i > 0) ? ans[i - 1] : -1;
    int successor = (i < n - 1) ? ans[i + 1] : -1;

    return std::make_pair(predecessor, successor);

}
