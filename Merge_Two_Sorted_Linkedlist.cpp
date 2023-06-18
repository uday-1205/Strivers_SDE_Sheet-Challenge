#include <bits/stdc++.h>



  using namespace std;
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };


Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    
    
    if(first==NULL){
        return second;

    }
    if(second==NULL){
        return first;
    }
    Node<int>* head;
    if(first->data<second->data){
         head=first;
         first=first->next;

    }
    else{
        head=second;
        second=second->next;
    }
Node<int> *current=head;
    while(first && second){
       if(first->data<second->data){
           current->next=first;
           first=first->next;

       }
       else{
           current->next=second;
           second=second->next;
       }
       current=current->next;
    }
    if(first){
        current->next=first;

    }
    if(second){
        current->next=second;
    }
  return head;

}
