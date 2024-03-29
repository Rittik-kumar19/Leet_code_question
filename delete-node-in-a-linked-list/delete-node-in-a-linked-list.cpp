/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       if(node==nullptr||node->next==nullptr) {
           delete node;
           return;
       }
       ListNode * nex=node->next;
       node->val = nex->val;
       node->next=nex->next;
       delete nex;
       return;
    }
};