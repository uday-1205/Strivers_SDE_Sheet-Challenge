#include <bits/stdc++.h> 
void sort1(stack<int> &s, int &to){
	if(s.empty()||to>=s.top()){
         s.push(to);
		 return;
	}
	int el=s.top();
	s.pop();
	sort1(s,to);
	s.push(el);
	return;
}
void sortStack(stack<int> &stack) {
    // Write your code here
    if (stack.empty()) {
        return;
    }
    int to = stack.top();
    stack.pop();
    sortStack(stack);

    sort1(stack,to);
    return;
}