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
vector < int > f(TreeNode<int> * curr) {
  vector < int > inOrder;
  stack < TreeNode<int> * > s;
  while (true) {
    if (curr != NULL) {
      s.push(curr);
      curr = curr -> left;
    } else {
      if (s.empty()) break;
      curr = s.top();
      inOrder.push_back(curr -> data);
      s.pop();
      curr = curr -> right;
    }
  }
  return inOrder;
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    if(root==NULL){
        return 0;
    }
   vector<int> ans=f(root);
    return ans[k-1];

}