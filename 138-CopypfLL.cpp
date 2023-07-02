class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        Node* curr=head;
        // Inserted new nodes in between the nodes such that every original node's next is
        // the  copy of that node and copy's next is the next of the oriiginal node 
        while(curr!=NULL){
            Node* temp = curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        //Setting random pointers of new made nodes 
        while(curr!=NULL){
            if(curr->next!=NULL){
                curr->next->random=(curr->random!=NULL)?(curr->random->next):NULL;
            }
            curr=curr->next->next;
        }
        Node* orig = head;
        // Node* copy = head->next;
        // Node* temp = copy;
        Node* temp= head->next;
        Node* copy = head->next;
        //Seprating the originala and copy LL
        while(orig!=NULL){
            orig->next=orig->next->next;
            // copy->next=copy->next->next;
            copy->next = copy->next?copy->next->next:copy->next;
            orig=orig->next;
            copy=copy->next;
        }
        return temp;
        
    }
};
