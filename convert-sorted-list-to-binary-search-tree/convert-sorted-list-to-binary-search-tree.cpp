/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
       if(!head){
           //returning null pointer
           return NULL;
       }
       if(!head->next){
           //returning head node
           return new TreeNode(head->val);
       }
        //slow and fast algorithm yaad rakhana
       ListNode* slow=head;
       ListNode* fast=head->next;
       while(fast->next && fast->next->next){
           slow=slow->next;
           fast=fast->next->next;
       }
       ListNode* mid=slow->next;
       slow->next=NULL;
       TreeNode*root=new TreeNode(mid->val);
       root->left=sortedListToBST(head);
       root->right=sortedListToBST(mid->next);    
       return root; 
    }
};