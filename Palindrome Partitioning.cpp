#include <bits/stdc++.h>
bool pal(string s,int start,int end){
   while(start<=end){
       if(s[start++]!=s[end--]){
          return false;
       }
   }
   return true;

} 
void f(int ind,string &s,vector<string> &res,vector<vector<string>> &ans,int n){
    if(ind==n){
          ans.push_back(res);
           return;
    }
    for(int i=ind;i<n;i++){
        
        if(pal(s,ind,i)){
            res.push_back(s.substr(ind,i-ind+1));
            f(i+1,s,res,ans,n);
            res.pop_back();
        }
    }



}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>> ans;
    vector<string> res;
    int n=s.length();
    string s1="";
    f(0,s,res,ans,n);
    return ans;

}