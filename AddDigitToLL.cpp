Node* reverse(Node*  head) {
    Node* prev = NULL,*curr=head,*next=NULL;
    while(curr!=NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *addValue(Node *head, int n) {

    head = reverse(head);
    Node* curr=head;
    while(curr!=NULL) {
        n=curr->data+n;
        curr->data = n%10;
        n/=10;
        if(curr->next==NULL)
            break;
        curr=curr->next;
    }
    if(n!=0) {
        curr->next = new Node(n);
        curr = curr->next;
    }
    return reverse(head);
}
//https://practice.geeksforgeeks.org/contest-problem/add-a-digit/1/
