class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //both null
        if (p==NULL && q==NULL){
            return true;
        }
        //anyone null and diff value
        if(p==NULL||q==NULL||p->val!=q->val){
            return false;
        }
        //recursion on both left and right sides 
        return isSameTree(p->left, q->left) && isSameTree(p->right,q->right);
    }
};
