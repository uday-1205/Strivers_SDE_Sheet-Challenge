#include <bits/stdc++.h> 
using namespace std;
long getTrappedWater(long *arr, int n){
    // Write your code here.
   long pref[n];
    long suff[n];
    pref[0]=arr[0];
    suff[n-1]=arr[n-1];
   long maxi=arr[0];
    for(int i=1;i<n;i++){
       maxi=max(maxi,arr[i]);
       pref[i]=maxi;
    }
    maxi=arr[n-1];
    suff[n-1]=maxi;
    for(int i=n-2;i>=0;i--){
        maxi=max(maxi,arr[i]);
       suff[i]=maxi;
    }
long ans=0;
    for(int i=0;i<n;i++){
        ans+=min(pref[i],suff[i])-arr[i];
    }
    return ans;

}