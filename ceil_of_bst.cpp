#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void inorderTraversal(BinaryTreeNode<int>* root, vector<int>& nodes) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left, nodes);
    nodes.push_back(root->data);
    inorderTraversal(root->right, nodes);
}

int findCeil(BinaryTreeNode<int>* root, int X) {
    vector<int> nodes;
    inorderTraversal(root, nodes);
    int ceilVal = -1;
    for (int i = 0; i < nodes.size(); i++) {
        if (nodes[i] >= X) {
            ceilVal = nodes[i];
            break;
        }
    }
    return ceilVal;
}