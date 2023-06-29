LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(!head) return head;
    LinkedListNode<int> * curr=head,*nex=NULL;
    while(curr)
    {
        nex=curr->next;
        LinkedListNode<int> * t=new LinkedListNode<int> (curr->data);
        t->random=NULL;
        curr->next=t;
        t->next=nex;
        curr=nex;
    }    
    curr=head;
    while(curr)
    {
        if(curr->random) curr->next->random=curr->random->next;
        curr=curr->next->next;
    }
    curr=head;
    LinkedListNode<int> * p= new LinkedListNode<int> (0);
    LinkedListNode<int> * copy=p;
    p->next=curr->next;
    while(curr)
    {
        nex=curr->next->next;
        copy->next=curr->next;
        copy=copy->next;
        curr->next=nex;
        curr=nex;
    }
    return p->next;
}