#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> s;
	stack<int> mins;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
			
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			s.push(num);
			if(mins.empty() || num<=mins.top()){
				mins.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			if(s.top()==mins.top()){
				mins.pop();
			}
			
			int t= s.top();
			s.pop();
			return t;

			

			if(s.top()==mins.top()){
				mins.pop();
			}
			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(s.empty()){
				return -1;
			}
			return s.top();

		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(mins.empty()){
				return -1;
			}
			return mins.top();
		}
};