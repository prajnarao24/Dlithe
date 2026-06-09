//check if two binar trees are same

#include<iostream>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

       TreeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

class solution{
    public:
    bool isSame(TreeNode*p,TreeNode*q){
        if(!p&&!q){
            return true;
        }
        if(!p||!q|| p->val!=q->val){
            return false;
        }

        return isSame(p->left,q->left)&& isSame(p->right,q->right);
    }
};

int main(){
    TreeNode* p1=new TreeNode(1);
    p1->left=new TreeNode(2);
    
}