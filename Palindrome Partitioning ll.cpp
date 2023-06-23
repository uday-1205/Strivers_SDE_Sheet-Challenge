#include <bits/stdc++.h> 
bool pal(string s,int start,int end){
   while(start<=end){
       if(s[start++]!=s[end--]){
          return false;
       }
   }
   return true;

} 

int f(int ind,string &s,int n,vector<int> &dp){
    if(ind==n){
          
           return 0;
    }
    int mini=INT_MAX;
    if(dp[ind]!=-1){
        return dp[ind];
    }
    for(int i=ind;i<n;i++){
        
        if(pal(s,ind,i)){
           int cost=1+f(i+1,s,n,dp);
          mini= min(mini, cost);
            
        }
    }
    return dp[ind]=mini;



}
int palindromePartitioning(string s) {
    // Write your code here
  int n=s.length();
    vector<int> dp(n,-1);
    
   
return f(0,s,n,dp)-1;
    
}
