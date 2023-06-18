#include <bits/stdc++.h> 
using namespace std;
  class Node {
  public:
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
  };
pair<Node*,int> length(Node *head){
     Node *temp=head;
     int l=0;
     Node *prev=head;
     while(temp){
          l++;
          prev=temp;
          temp=temp->next;

     }
     return {prev,l};
}
Node *rotate(Node *head, int k) {
     // Write your code here.
    pair<Node*,int> p= length(head);
    auto it=p;
     int l=it.second;
     k=k%l;
    if(k==0){
         return head;
    }

    Node *last=it.first;

  
    Node *temp=head;
    Node *prev=head;
int i=0;
int K=l-k;
    while(i<K){
         prev=temp;
         temp=temp->next;
         i++;

    }
    last->next=head;
    prev->next=NULL;
    return temp;


}