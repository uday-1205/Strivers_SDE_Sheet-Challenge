#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int v[n]={0};
	int missing=0,repeat=0;
	for(int i=0;i<n;i++){
		if(v[arr[i]-1]!=0){
			repeat=arr[i];
		}
		v[arr[i]-1]+=arr[i];

	}
	
	for(int i=0;i<n;i++){
         if(v[i]==0){
			 missing=i+1;
			 break;

		 }
	}
	pair<int,int> p({missing,repeat}); 
	return p;
	
}
