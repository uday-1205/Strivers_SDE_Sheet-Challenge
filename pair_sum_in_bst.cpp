#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void f(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    f(root->left,ans);
    ans.push_back(root->data);
    f(root->right,ans);
    return;
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int> ans;
    f(root,ans);
    int i=0;
    int j=ans.size()-1;
    while(i<j){
        if(ans[i]+ans[j]==k){
            return true;
        }
        if(ans[i]+ans[j]<k){
            i++;
        }
        else{
       j--;
        }
    }
    return false;
}