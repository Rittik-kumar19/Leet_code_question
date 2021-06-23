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
    int fnc(TreeNode* root,bool &ans){
    if(root==NULL)return 0;
    int left=fnc(root->left,ans);
    int right=fnc(root->right,ans);
    if(abs(right-left)>1)ans=false;
    return max(left,right)+1;
  }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        bool ans=true;
         fnc(root,ans);
        return ans;
    }
};