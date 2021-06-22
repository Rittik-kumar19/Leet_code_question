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
    TreeNode*  createTree(vector<int>& inorder,vector<int>& postorder,int &ps,int is,int ie){
    
    //cout<<ps<<endl;
    if(ps<0||is>ie){
        return NULL;
    }
    int pos;
    TreeNode* node=new TreeNode(postorder[ps]);
    
    for(int i=is;i<=ie;i++){
        if(node->val==inorder[i]){
            pos=i;
            break;
        }
    }
    
    ps--;
    //create right tree first and then left tree 
    node->right=createTree(inorder,postorder,ps,pos+1,ie);
    
    node->left=createTree(inorder,postorder,ps,is,pos-1);
    
    return node;
    
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
 
    int ps=postorder.size()-1;
    return createTree(inorder,postorder,ps,0,inorder.size()-1);
}
};