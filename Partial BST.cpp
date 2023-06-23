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
bool validate(BinaryTreeNode<int>* root, long long mini, long long maxi) {
    if (root == NULL) {
        return true;
    }
    if (root->data < mini || root->data > maxi) {
        return false;
    }
    if (!validate(root->left, mini, root->data)) {
        return false;
    }
    return validate(root->right, root->data, maxi);
}

bool validateBST(BinaryTreeNode<int>* root) {
    if (root == NULL) {
        return true;
    }
    return validate(root, LONG_MIN, LONG_MAX);
}
