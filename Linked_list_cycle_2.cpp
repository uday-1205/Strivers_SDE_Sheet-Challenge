
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



Node *firstNode(Node *head)
{
    //    Write your code here.

    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if (slow == fast) {
            break; // Loop detected
        }

    }
    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }

   
    Node *begin=head;
    while(begin!=slow){
        slow=slow->next;
        begin=begin->next;
       
    }
    return begin;
}