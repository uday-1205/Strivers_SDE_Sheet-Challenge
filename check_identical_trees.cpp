#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

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

***********************************************************/
bool check(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    } else if (root1 == NULL || root2 == NULL) {
        return false;
    }
    
    return (root1->data == root2->data) && check(root1->left, root2->left) && check(root1->right, root2->right);
}

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    return check(root1, root2);
}
