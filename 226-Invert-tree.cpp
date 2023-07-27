class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        if(root->left!=NULL||root->right!=NULL){
            TreeNode* node = root ->left;
            root->left=root->right;
            root->right = node;
        }
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
