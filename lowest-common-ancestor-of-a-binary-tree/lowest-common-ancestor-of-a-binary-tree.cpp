class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        if(root==p || root==q){
            return root;
        }
        TreeNode *rootleft=lowestCommonAncestor(root->left,p,q);
        TreeNode *rootright=lowestCommonAncestor(root->right,p,q);
        if(rootleft && rootright){
            return root;
        }
        if(rootleft){
            return rootleft;
        }
        else {
            return rootright;
        }
    }
};