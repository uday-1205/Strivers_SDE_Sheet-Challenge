#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};



int length(Node *head){
    int l=0;
    Node *temp=head;
    while(temp){
        l++;
        temp=temp->next;
    }
    return l;
}
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.

   int l= length(head);

   int d=l-K;
   int i=0;
   if(l==K){
       return head->next;
   }
   Node *temp=head;
   Node *prev=head;

   while(i<d){
       prev=temp;
       temp=temp->next;
       i++;
   }
   prev->next=temp->next;
   temp=NULL;
return head;

}
