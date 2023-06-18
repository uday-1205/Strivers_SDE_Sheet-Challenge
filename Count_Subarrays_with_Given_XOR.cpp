#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size();
    int c=0;
    for(int i=0;i<n;i++){
        int xo=0;
       for(int j=i;j<n;j++){
          xo=xo^arr[j];
          if(xo==x){
              c+=1;
          }
       }
    }
    return c;
}