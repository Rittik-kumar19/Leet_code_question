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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        kthinorder(root,k,ans);
        return ans[k-1];
    }
    void kthinorder(TreeNode* root,int k,vector<int>&ans){
        if(!root){
            return;
        }
        if(root->left){
            kthinorder(root->left,k,ans);
        }
        ans.push_back(root->val);
        if(root->right){
            kthinorder(root->right,k,ans);
        }
    }
};