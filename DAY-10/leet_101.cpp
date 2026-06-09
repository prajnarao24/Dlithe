class Solution{
    public:
    bool mirror(Treenode* left,Treenode* right){
        if(!left&& !right){
            return true;
        }
        if(!left||!right){
            return false;
        }
        if(left->val!=right->val){
            return false;
        }

        return mirror(left->left,right->right)&&
        mirror(left->right,right->left);
    }
};