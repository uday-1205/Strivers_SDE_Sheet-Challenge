#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	int i = 0;
    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<int>> q2;
  

    while (i < n) {
        if (q1.empty() || q1.top() > arr[i]) {
            q1.push(arr[i]);
        } else {
            q2.push(arr[i]);
        }

        if (q1.size() > q2.size() + 1) {
            q2.push(q1.top());
            q1.pop();
        } else if (q2.size() > q1.size() + 1) {
            q1.push(q2.top());
            q2.pop();
        }

        if (q1.size() == q2.size()) {
            arr[i] = (q1.top() + q2.top()) / 2;
            
        } else {
           arr[i] = (q1.size() > q2.size()) ? q1.top() : q2.top();
             
        }
        i++;
    }
    return arr;
}
