class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        if (root) {
            convertBST(root->right);
            root->val += sum;
            sum = root->val;
            convertBST(root->left);
        }
        return root;
    }
    
private:
    int sum = 0;
};