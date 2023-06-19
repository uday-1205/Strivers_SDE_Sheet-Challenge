#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void f(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for (int i = 0; i < size; i++) {
          BinaryTreeNode<int> *node = q.front();
          ans.push_back(node->val);
          q.pop();

          if(node->left){
              q.push(node->left);
          }
          if(node->right){
              q.push(node->right);
          }
        }
    }
    return;
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> ans;
    f(root,ans);
    return ans;
}