#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string input)
{
    //Write your code here
    int i = 0;
    int j = 0;
    int n = input.length();
    std::map<char, bool> mp;
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int maxi = 0;
    int c = 0;

    while (j < n) {
        if (mp.find(input[j]) == mp.end()) {
            c++;
            mp[input[j]] = true;
            maxi = std::max(maxi, c);
            j++;
        } else {
            mp.erase(input[i]);
            c--;
            i++;
        }
    }
    return maxi;
}