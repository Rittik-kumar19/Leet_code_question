/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root == NULL) return 0;
        
        queue<TreeNode*> depth;
        depth.push(root);
        int level = 1, max = INT_MIN, big = 0;
        
        while(!depth.empty()){
            int sum = 0, size = depth.size();
            
            for(int i = 0; i < size; i++) {
                TreeNode* curr = depth.front();
                sum += curr->val;
                depth.pop();
                
                if(curr->left) { depth.push(curr->left); }
                if(curr->right) { depth.push(curr->right); }
            }
            
            if(sum > max){ max = sum; big = level; }
            
            level += 1;
        }
        
        return big;
    }
};