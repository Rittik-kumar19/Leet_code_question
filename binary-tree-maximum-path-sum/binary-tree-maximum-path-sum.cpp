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
    int maxPathSum(TreeNode* root) {
       int h=INT_MIN; 
        return mpsum(root,h);
    }
    int mpsum(TreeNode* root,int &h){
        if(root==nullptr){
            return INT_MIN;
        }
        int h1=INT_MIN;
        int h2=INT_MIN;
        int d1=mpsum(root->left,h1);
        int d2=mpsum(root->right,h2);
        h=max({h1,h2,0})+root->val;
        return max({d1,d2,max(h2,0)+max(h1,0)+root->val});
    }
};