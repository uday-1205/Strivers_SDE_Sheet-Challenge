#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    long long sum=0;
    long long maxi=arr[0];
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>maxi){
            maxi=sum;
        }
        
    }
    return maxi;
}