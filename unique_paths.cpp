#include <bits/stdc++.h> 
using namespace std;
int f(int ind1,int ind2,int n,int m,vector<vector<int>> &dp){
	if(ind1==n && ind2==m){
		return 1;
	}
	if(ind1> n || ind2>m){
		return 0;
	}
	if(dp[ind1][ind2]!=-1){
		return dp[ind1][ind2];
	}
	int take=f(ind1+1,ind2,n,m,dp);
	int ntake=f(ind1,ind2+1,n,m,dp);
	return dp[ind1][ind2]=take+ntake;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
	
	return f(0,0,m-1,n-1,dp);
}