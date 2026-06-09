bool maxdepth(TreeNode* root){
    if(root==nullptr) return 0;
    int left=maxdepth(root->left);
    int right=maxdepth(root->right);
    int res=1+max(left,right);
    int res;
}
