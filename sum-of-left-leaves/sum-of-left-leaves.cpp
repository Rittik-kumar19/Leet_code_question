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
    int sum=0;
    void sumleaves(TreeNode* root,bool isleft){
        if(isleft && root->left==NULL && root->right==NULL){
            sum+=root->val;
            return;
        }
        if(root->left){
            sumleaves(root->left,true);
        }
        if(root->right){
            sumleaves(root->right,false);
        }
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
       if(root==NULL){
           return 0;
       }
       sumleaves(root,false); 
        return sum;
    }
};