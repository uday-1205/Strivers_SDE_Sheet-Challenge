#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

long long int f(TreeNode<int>* root, long long int& maxi) {
    if (root == NULL) {
        return 0;
    }
    
    long long int lh = f(root->left, maxi);
    long long int rh = f(root->right, maxi);

   

   

    maxi = max(maxi, root->val+lh+rh);

    return root->val+max(lh,rh) ;
}

long long int findMaxSumPath(TreeNode<int>* root) {
    if (root == NULL  ||root->left==NULL || root->right==NULL) {
        return -1;
    }

    long long int maxi = INT_MIN;
    f(root, maxi);
    return maxi;
}
