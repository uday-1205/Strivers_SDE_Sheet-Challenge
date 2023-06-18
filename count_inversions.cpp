#include <bits/stdc++.h>
using namespace std;
long long mergesort(int low,int mid,int high,long long  *arr){
    vector<int> jus;
    int left=low;
    int right=mid+1;
    long long cnt=0;
    while(left<= mid && right<=high){
          if(arr[left]<=arr[right]){
              jus.push_back(arr[left]);
              left++;
          }
          else{
              jus.push_back(arr[right]);
              cnt+=(mid-left+1);
              right++;
          }
    }

    while(left<=mid){
        jus.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        jus.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=jus[i-low];
    }
    return cnt;


}
long long  merge(int low,int high,long long *arr){
    long long count=0;
    if(low>=high){
        return count;
    }
   
        int mid=(low+high)/2;
       count+= merge(low,mid,arr);
       count+= merge(mid+1,high,arr);
       count+= mergesort(low,mid,high,arr);
       return count;
    
} 
long long getInversions(long long *arr, int n){
    // Write your code here.
   return merge(0,n-1,arr);
}