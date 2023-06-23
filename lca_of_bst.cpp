TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q)
{
	// Write your code here
    if(root==NULL){
        return NULL;
    }
    int cur=root->data;
    if(cur<p->data && cur<q->data){
        return LCAinaBST(root->right,p,q);
    }
    else if(cur>p->data && cur>q->data){
         return LCAinaBST(root->left,p,q);
    }
    return root;
        
}
