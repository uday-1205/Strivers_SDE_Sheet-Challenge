#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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
    };


************************************************************/
void f(BinaryTreeNode<int> *root,vector<int> &v1,vector<int> &v2,vector<int> &v3){
    if(root==NULL){
        return;
    }
    v1.push_back(root->data);
    f(root->left,v1,v2,v3);
    v2.push_back(root->data);
    f(root->right,v1,v2,v3);
     v3.push_back(root->data);


}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    f(root,v1,v2,v3);
    ans.push_back(v2);
    ans.push_back(v1);
    ans.push_back(v3);
    return ans;

    
}