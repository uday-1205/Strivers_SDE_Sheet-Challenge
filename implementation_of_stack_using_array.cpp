#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int *arr;
    int size;
    int top1;
    
public:
    
    Stack(int capacity) {
        // Write your code here.
        size=capacity;
        top1=-1;
        arr=new int[size];

    }

    void push(int num) {
        // Write your code here.
        arr[++top1]=num;
        

    }

    int pop() {
        // Write your code here.
        if(top1==-1){
            return -1;
        }
        int x=arr[top1];
        top1--;
        
        return x;
    }
    
    int top() {
        // Write your code here.
        if(top1==-1){
            return -1;
        }
        return arr[top1];
    }
    
    int isEmpty() {
        // Write your code here.
        if(top1==-1){
            return true;
        }
        return false;
        
    }
    
    int isFull() {
        // Write your code here.
        if(size==top1){
            return 1;
        }
        return 0;
    }
    
};