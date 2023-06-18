#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int i=0;
    int j=0;
    int c=1;
    int maxi=1;
    while(j<n-1){
        if(arr[j]==arr[j+1]-1){
            c++;
            j++;
           
        }
        else if(arr[j]==arr[j+1]){
            j++;
        }
        else{
            

            c=1;
        j++;

        }
        maxi=max(maxi,c);
       
    }
    return maxi;
}