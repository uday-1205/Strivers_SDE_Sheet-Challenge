TreeNode<int>* f(int low,int high,vector<int> &preorder){
  if(low>high){
    return NULL;
  }
  TreeNode<int>* root =new TreeNode<int>(preorder[low]);
  int i=low+1;
  for(;i<=high;i++){
    if(preorder[low]<preorder[i]){
      break;
    }
  }

  root->left=f(low+1,i-1,preorder);
  root->right=f(i,high,preorder);
  return root;
}
TreeNode<int>* preOrderTree(vector<int> &preorder){
    // Write your code here.
    return f(0,preorder.size()-1,preorder);
}