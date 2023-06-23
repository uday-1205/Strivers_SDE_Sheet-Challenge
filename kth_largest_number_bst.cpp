#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
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
bool f(TreeNode <int>*root,int &k,int &val){
    if(root==NULL){
        return false;;
    }
    

    
   if( f(root->right,k,val)==true){
       return true;
   }
   k--;
    if(k==0){
        val=root->data;
        return true;
    }
    
   return  f(root->left,k,val);
    
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
  
int val=-1;
    bool g=f(root,k,val);
    return val;

}
