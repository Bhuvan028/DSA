class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
      ListNode *prv = NULL;
        ListNode *curr = head;
        ListNode *next ;
        while(curr != NULL) {
            next = curr->next;
            curr ->next = prv;
            prv = curr;
            curr = next;
        } 
        return prv;
       
        
    }
};
