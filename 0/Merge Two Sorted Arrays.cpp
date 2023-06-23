#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int n1=arr1.size();
	int n2=arr2.size();
	int i=n1-1;
	int j=0;
	for(int i=0;i<n2;i++){
		arr1.pop_back();
	}
	for(int i=0;i<n2;i++){
		arr1.push_back(arr2[i]);
		
	}
	sort(arr1.begin(),arr1.end());
	return arr1;
	

}