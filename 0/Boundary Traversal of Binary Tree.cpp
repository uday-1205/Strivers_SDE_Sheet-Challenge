#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isleaf(TreeNode<int>* root){
    if(root->left==NULL && root->right==NULL ){
        return true;
    }
    return false;
}
void fleft(TreeNode<int>* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(isleaf(root)==false){
        ans.push_back(root->data);
    }
    if(root->left!=NULL){
        fleft(root->left,ans);
    }
    else{
        fleft(root->right,ans);
    }
    return;
}
void fright(TreeNode<int>* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(isleaf(root)==false){
        ans.push_back(root->data);
    }
    if(root->right!=NULL){
        fright(root->right,ans);
    }
    else{
        fright(root->left,ans);
    }
    return;
}
void fleaves(TreeNode<int>* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(isleaf(root)){
        ans.push_back(root->data);

    }
    fleaves(root->left,ans);
    fleaves(root->right,ans);
    return;
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    if (isleaf(root)==false) ans.push_back(root -> data);
    
    
    fleft(root->left,ans);
    fleaves(root,ans);
    vector<int> temp;
    fright(root->right,temp);
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
    return ans;
    

}