#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void f(BinaryTreeNode < int > * root){
    if(root==NULL){
        return;
    }
    int child=0;
    if(root->left){
        child+=root->left->data;
    }
    if(root->right){
        child+=root->right->data;
    }

    if(root->data>child){
        if(root->left){
            root->left->data=root->data;
        }
         else if(root->right){
            root->right->data=root->data;
        }

    }



    f(root->left);
    f(root->right);
    int total=0;
    if(root->left){
        total+=root->left->data;
    }
    if(root->right){
        total+=root->right->data;
    }
    if (root->left || root->right) {
      root->data = total;
    }
    return;


}
void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    f(root);
}  