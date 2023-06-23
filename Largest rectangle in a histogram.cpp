 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int n=heights.size();
   int a[n];
   stack<int> s;
   
   for(int i=0;i<n;i++){
     while(!s.empty() && heights[i]<=heights[s.top()]){
       s.pop();
     }
     if(s.empty()){
       a[i]=0;
     } else {
       a[i]=s.top()+1;
      
     }
      s.push(i);
   }


   while(!s.empty()){
     s.pop();
   }


int b[n];
   for(int i=n-1;i>=0;i--){
       while(!s.empty() && heights[i]<=heights[s.top()]){
       s.pop();
     }
     if(s.empty()){
       b[i]=n-1;
     } else {
       b[i]=s.top()-1;
      
     }
      s.push(i);
   }


   int maxA=0;
   for(int i=0;i<n;i++){
     maxA=max(maxA,heights[i]*(b[i]-a[i]+1));
   }
   return maxA;
     
 }