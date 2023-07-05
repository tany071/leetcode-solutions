class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //empty or one element LL
        if(head==NULL || head->next==NULL)return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        int count=0;
        while(count<n)
        {   
            count++;
            fast=fast->next;
        }
        if(fast==NULL){
            return head->next;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
