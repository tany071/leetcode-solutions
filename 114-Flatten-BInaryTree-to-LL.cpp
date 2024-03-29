class Solution {
public:
    void convert(TreeNode* root, TreeNode* &prev){
        if(root==NULL) return;
        convert(root->right,prev);
        convert(root->left,prev);
        root->right=prev;
        root->left=NULL;
        prev=root;
    }
        
    void flatten(TreeNode* root) {
        TreeNode* prev=NULL;
        return convert (root,prev);
    }
};
