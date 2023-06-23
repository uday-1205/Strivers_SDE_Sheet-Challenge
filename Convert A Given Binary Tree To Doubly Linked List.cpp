#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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

*************************************************************/
void inorder(BinaryTreeNode<int>* root,BinaryTreeNode<int>* &cur,
BinaryTreeNode<int>* &ans){
    if(root==NULL){
        return;
    }

    inorder(root->left,cur,ans);
    if(ans==NULL){
        ans=new  BinaryTreeNode<int>(root->data);
        cur=ans;
    }
    else{
        cur->right=new  BinaryTreeNode<int>(root->data);
        cur->right->left=cur;
        cur=cur->right;
    }
    inorder(root->right,cur,ans);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    BinaryTreeNode<int>* ans=NULL;
     BinaryTreeNode<int>* cur=NULL;
     cur=ans;


    inorder(root,cur,ans);
    return ans;



}