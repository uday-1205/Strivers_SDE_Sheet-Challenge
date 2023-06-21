#include <bits/stdc++.h>

std::vector<int> countDistinctElements(std::vector<int>& arr, int k) {
    std::map<int, int> mp;
    int n = arr.size();
    std::vector<int> ans;

    for (int i = 0; i < k; i++) {
        mp[arr[i]]++;
    }

    ans.push_back(mp.size());
int j=0;
    for (int i = k; i < n; i++) {
        if (mp[arr[j]] == 1) {
            mp.erase(arr[j]);
            j++;
        } else {
            mp[arr[j]]--;
            j++;
        }

        mp[arr[i]]++;
        ans.push_back(mp.size());
    }

    return ans;
}




