#include <bits/stdc++.h> 
using namespace std;
void f(int ind,int n,vector<int> &arr,set<vector<int>> &set, vector<int> &temp){
    if(ind==n){
           set.insert(temp);
           return;
    }

    temp.push_back(arr[ind]);
    f(ind+1,n,arr,set,temp);
    temp.pop_back();
    f(ind+1,n,arr,set,temp);

}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    set<vector<int>> set;
    vector<int> temp;
    f(0,n,arr,set,temp);
    vector<vector<int>> ans;
    for(auto it:set){
        ans.push_back(it);
    }
    return ans;
}