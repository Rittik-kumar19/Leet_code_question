class Solution {
public:
    void postorder_bst(const TreeNode* node, vector<int>& vals) const {
        if (node == nullptr)
            return;

        postorder_bst(node->left, vals);
        postorder_bst(node->right, vals);
        vals.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        postorder_bst(root, ret);
        return ret;
    }
};