class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=head->val;
        while(head->next){
            res=res*2+head->next->val;
            head=head->next;
        }
        return res;
    }
};
