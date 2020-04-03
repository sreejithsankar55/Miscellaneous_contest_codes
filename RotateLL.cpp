Node* rightRotate(Node* head, int k) 
{
    if (!head) 
		return head; 
    struct Node* temp1=head;
    int c=0;

    while(temp1!=NULL) {
        temp1=temp1->next;
        c++;
    }
    if(k%c == 0)
        return head;
    k=(k%c);

    struct Node* temp2 = head;
    temp1=head;
    while(k--) {
        temp2 = temp2->next;
    }
    while(temp2->next!=NULL) {
        temp1=temp1->next;
        temp2 = temp2->next;
    }
    temp2->next = head;
    head = temp1->next;
    temp1->next = NULL;
    return head;
}
//https://practice.geeksforgeeks.org/contest-problem/rotate-clockwise/1/
