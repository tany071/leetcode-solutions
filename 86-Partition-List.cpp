class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* leftHead = new ListNode(-1);
        ListNode* leftTail = leftHead;
        ListNode* rightHead = new ListNode(-1);
        ListNode* rightTail = rightHead;
        ListNode* curr = head;
        while(curr!=NULL){
            if(curr->val>=x){
            rightHead->next=curr;
            rightHead= rightHead->next;
            curr=curr->next;
            }else{
                leftHead->next=curr;
                leftHead=leftHead->next;
                curr=curr->next;
            }
        }
        leftHead->next=rightTail->next;
        rightHead->next=NULL;
        return leftTail->next;
    }
};
