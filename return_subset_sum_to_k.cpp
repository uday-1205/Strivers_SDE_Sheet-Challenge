 #include <bits/stdc++.h> 
using namespace std;
 void findcombination(int ind,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if (ind == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }

    ds.push_back(arr[ind]);
    findcombination(ind+1, target - arr[ind], arr, ans, ds);
    ds.pop_back();

    findcombination(ind + 1, target, arr, ans, ds);

            
        
        
        
    }
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,k,arr,ans,ds);
        return ans;

}