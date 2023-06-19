#include<bits/stdc++.h>
/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
void construct(const vector<int>& inOrder, map<int, int>& mp) {
    for (int i = 0; i < inOrder.size(); i++) {
        mp[inOrder[i]] = i;
    }
}

TreeNode<int>* conste(int ilow, int ihigh, vector<int>& inOrder, int plow, int phigh,
                      vector<int>& postOrder, map<int, int>& mp) {
    if (ilow > ihigh || plow > phigh) {
        return NULL;
    }
    
    TreeNode<int>* root = new TreeNode<int>(postOrder[phigh]);
    int ind = mp[postOrder[phigh]];
    int intro = ind - ilow;
    root->left = conste(ilow, ind - 1, inOrder, plow, plow + intro-1, postOrder, mp);
    root->right = conste(ind + 1, ihigh, inOrder, plow + intro , phigh - 1, postOrder, mp);
    return root; 
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) {
    int n = postOrder.size();
    map<int, int> mp;
    construct(inOrder, mp);
    return conste(0, n - 1, inOrder, 0, n - 1, postOrder, mp);
}

