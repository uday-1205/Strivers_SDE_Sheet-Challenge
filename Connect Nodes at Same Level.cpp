#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    if(root==NULL){
        return;
    }
    // Write your code here.
    queue<BinaryTreeNode< int > *> q;
    q.push(root);
    
    while(!q.empty()){
        int size=q.size();
       BinaryTreeNode< int > * prev=NULL;
       for(int i=0;i<size;i++){
           BinaryTreeNode< int > * cur=q.front();
           q.pop();
           if(prev!=NULL){
               prev->next=cur;
           }
           prev=cur;
           if(cur->left!=NULL){
               q.push(cur->left);
           }
           if(cur->right){
               q.push(cur->right);
           }
       }
       prev=NULL;
    }

    return ;
}