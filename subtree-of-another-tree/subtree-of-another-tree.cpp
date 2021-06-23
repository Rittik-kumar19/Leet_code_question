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
    bool isSame(TreeNode *r1,TreeNode *r2){
        if(!r1 && !r2)
            return true;
        if(!r1 || !r2 )
            return false;
        if(r1->val!=r2->val)
            return false;
        return (isSame(r1->left,r2->left) && isSame(r1->right,r2->right));
    }
    //NOTE:/*V1==v2 means that current tree with root node can be sub tree so for that both must be same otherwise we check for left sub tree and right sub tree' sub trees */
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //base case
        if(!root && !subRoot)//base case 1
            return true;
        if(!root && subRoot)//Base case 2
            return false;
        if(root && !subRoot)//Base case 3
            return true;
        int v1=root->val,v2=subRoot->val;
        if(v1==v2)
            return (isSame(root,subRoot) ||(isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot)) );
        else{
            return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
        }
    }
};