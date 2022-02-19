class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size()==0){
            return NULL;
        }
        vector<int>v;
        for(auto list:lists){
            while(list!=NULL){
                v.push_back(list->val);
                list=list->next;
            }
        }
        
        if(v.size()==0){
            return NULL;
        }
        sort(v.begin(),v.end());
        
        ListNode *head = new ListNode();
        ListNode *tmp = head;
        for(int i=0;i<v.size();i++){
            tmp ->next = new ListNode(v[i]);
            tmp=tmp->next;
        }
        return head->next;
        
    }
};