#include<bits/stdc++.h>
using namespace std;
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.

    int n=matrix.size();
    int m=matrix[0].size();
    int arr[n*m];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[k++]=matrix[i][j];
        }
    }

    sort(arr,arr+(n*m));
    if((n*m)%2!=0){
        return arr[(n*m)/2];
    }
    int sec=arr[(n*m)/2];
    int fir=arr[((n*m)/2)-1];
    return (sec+fir)/2;

}