#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int prefix=1;
	int suffix=1;
	int maxi=INT_MIN;
	
	int i=0;
	while(i<n){
		if(prefix==0){
			prefix=1;

		}
		if(suffix==0){
			suffix=1;
		}
		prefix=prefix*arr[i];
		suffix=suffix*arr[n-i-1];
		maxi=max(maxi,max(prefix,suffix));
  i++;
		
	}
	return maxi;
}
