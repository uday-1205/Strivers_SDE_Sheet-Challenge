#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/
bool f(BinaryTreeNode<int> *root, int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        if(f(root->left,x)==true){
            return true;
        }
    }
    else{
       return f(root->right,x);
    }
}
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    f(root,x);
}