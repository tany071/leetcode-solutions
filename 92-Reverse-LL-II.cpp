class Solution {
public:
ListNode * reverse(ListNode * head)
{
    ListNode * prev=NULL;
  
    ListNode * temp = head;
    while(temp!=NULL)
    {  ListNode *  forward = temp->next;
        temp->next=prev;
       
        prev = temp;
        temp =forward;

    }
    return prev;

}
ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode * prev=NULL;
    ListNode * current=head;
    int count = 1;
   while(count !=left){
       prev=current;
       current=current->next;
       count++;}   
    ListNode * start = current;
    while(count !=right)
     {  current=current->next;
        count++;}
    ListNode * rest=current->next;
    current->next=NULL;
    ListNode * newhead= reverse(start);
    if(prev!=NULL)
      {
          prev->next=newhead;
      }
    current=newhead;
      while(current->next!=NULL)
      {
          current=current->next;
      }
    current->next=rest;
      if(left ==1)
      {
          return newhead;
      }
      else
      {
          return head;
      }
       
    }
  
};
