#include<bits/stdc++.h>
using namespace std;
long f(int ind,int n,int *denominations,int value,vector<vector<long>> &dp){
    if(ind==n){
        if(value%denominations[n]==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(value==0){
        return 1;
    }
    if(dp[ind][value]!=-1){
        return dp[ind][value];
    }
    long take=0;
    if(value>=denominations[ind]){
      take=  f(ind,n,denominations,value-denominations[ind],dp);
       
    }
    long nottake=f(ind+1,n,denominations,value,dp);
    return dp[ind][value]=take+nottake;



}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long>> dp(n+1,vector<long>(value+1,-1));
    return f(0,n-1,denominations,value,dp);
}