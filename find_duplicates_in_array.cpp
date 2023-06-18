#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int just[n]={0};
	for(int i=0;i<n;i++){
		just[arr[i]]=just[arr[i]]+1;
		if(just[arr[i]]==2){
			return arr[i];
		}
	}
}
