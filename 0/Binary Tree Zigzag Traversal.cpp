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
void f(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    int flag=0;
    while(!q.empty()){
        int size=q.size();
        

        vector<int> temp;
        for (int i = 0; i < size; i++) {
          BinaryTreeNode<int> *node = q.front();
          temp.push_back(node->data);
          q.pop();

          if(node->left){
              q.push(node->left);
          }
          if(node->right){
              q.push(node->right);
          }
        }
        if(flag==0){
            for(int i=0;i<temp.size();i++){
                ans.push_back(temp[i]);
            }
            flag=1;
        }
        else{
            for(int i=temp.size()-1;i>=0;i--){
                ans.push_back(temp[i]);
            }
            flag=0;
        }

    }
    return;
}
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    f(root,ans);
    return ans;

}
