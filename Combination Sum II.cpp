#include<bits/stdc++.h>
void f(int ind,int n,vector<int> &arr,vector<vector<int>> &ans, 
vector<int> &temp,int target){
    if(target==0){
     ans.push_back(temp);
           return;
    }
    for(int i=ind;i<n;i++){
      if(i>ind && arr[i]==arr[i-1]){
        continue;
      }

      if(target>=arr[i]){
           temp.push_back(arr[i]);
            f(i+1,n,arr,ans,temp,target-arr[i]);
            temp.pop_back();
      }
    }
    
   return;

}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
sort(arr.begin(),arr.end());
    
    vector<int> temp;
    vector<vector<int>> ans;
    f(0,n,arr,ans,temp,target);
   
   
    return ans;

}
