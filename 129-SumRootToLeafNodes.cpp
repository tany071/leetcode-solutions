class Solution {
public:
    int ans = 0;
    void helper(TreeNode* root , int val){
        if(root->left==NULL && root->right==NULL){
            val = val *10 +(root->val);
            ans+=val;
            return ;
        }
        val = (val*10)+(root->val);
        cout<<val<<endl;
        if(root->left!=NULL){
            helper(root->left,val);
        }
        if(root->right!=NULL){
            helper(root->right,val);
        }

    }
    int sumNumbers(TreeNode* root) {
        helper(root,0);
        return ans;
    }
};
