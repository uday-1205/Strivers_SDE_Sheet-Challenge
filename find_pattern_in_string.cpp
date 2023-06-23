#include <bits/stdc++.h> 
bool findPattern(string p, string s)
{
    // Write your code here.
    int n=s.length();
        int pl=p.length();
        // Write your code here.
        for(int i=0;i<=n-pl;i++){
            string j=s.substr(i,pl);
            if(j==p){
                return true;
            }
        }
        return false;
}