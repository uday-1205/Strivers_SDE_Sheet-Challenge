#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
 TreeNode<int> *lca(TreeNode<int> * root,TreeNode<int> * p,TreeNode<int> *q){
    if(root==NULL || root==p|| root==q){
        return root;
    }
    
     TreeNode<int> * l=lca(root->left,p,q);
     TreeNode<int> * r=lca(root->right,p,q);
     if(l==NULL){
         return r;
     }
     else if(r==NULL){
         return l;
     }
     else{
         return root;
     }

   


}
TreeNode<int> *search(TreeNode<int> *root,int x){
    if(root==NULL || root->data==x){
        return root;
    }
   TreeNode<int> *lh=search(root->left,x);
    if(lh!=NULL){
        return lh;
    }
    
    return search(root->right,x);
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here

    TreeNode<int> *p=search(root,x);
    TreeNode<int> *q=search(root,y);
    TreeNode<int> * v=lca(root,p,q);
    return v->data;
}