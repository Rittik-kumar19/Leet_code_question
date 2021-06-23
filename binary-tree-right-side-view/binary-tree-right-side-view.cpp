class Solution {
public:
    void rightSideViewUtil(TreeNode* root, vector<int> &ans, int level) {
        if(root==NULL)
            return;
        
        if(level >ans.size()) 
        ans.push_back(root->val);
                
        rightSideViewUtil(root->right, ans, level+1);
        rightSideViewUtil(root->left, ans, level+1);
        
    }
    
    
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int>ans;
        
        rightSideViewUtil(root, ans, 1);
        
        return ans;
    }
};