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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0;
        //length of Alist
        ListNode *tempA=headA;
        while(tempA != nullptr){
            lenA++;
            tempA = tempA->next;
        }
        
        //length of B list
        int lenB=0;
        ListNode *tempB = headB;
        while(tempB !=nullptr){
            lenB++;
            tempB = tempB->next;
        }
        
        int diff = abs(lenA-lenB);
        //iterate on larger list for diff nodes
        tempA = headA;
        tempB = headB;
        if(lenA > lenB){
            while(diff-->0){
                tempA=tempA->next;
            }
        }
        else{
            while(diff-->0){
                tempB= tempB->next;
            }
        }
        //check for equality
        while(tempA != tempB){
            tempA = tempA->next;
            tempB = tempB->next;
            if(tempA==nullptr || tempB == nullptr){
                return nullptr;
            }
        }
        return tempA;
    }
};