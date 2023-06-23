#include <bits/stdc++.h> 
void reverse1(int low,int high,vector<int> &permutation){
    while(low<high){
        swap(permutation[low++],permutation[high--]);
    }
}
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
   int i=n-2;
   while(i>=0 && permutation[i]>=permutation[i+1]){
       i--;
   }
   if(i>=0){
   int j=n-1;
   while (permutation[j] <= permutation[i]) {
     j--;
   }
   swap(permutation[i], permutation[j]);
   }
   reverse1(i+1,permutation.size()-1,permutation);
   return permutation;
}