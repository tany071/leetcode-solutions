

class Solution {
public:
    int length(ListNode* head){
        ListNode* temp=head;
        int i=0;
        while(temp!=NULL){
            i++;
            temp=temp->next;
        }
        return i;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;
        int len=length(head);
        if(k>len)return head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        ListNode* curr= head;
        int count=0;
        while(curr!=NULL&& count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++; 
        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};
