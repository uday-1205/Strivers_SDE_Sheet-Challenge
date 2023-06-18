#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int i=0;
   int j=0;
   int k=n-1;
   while(j<=k){
     switch (arr[j]) {
     case 0:
     swap(arr[i], arr[j]);
       i++;
       j++;
       
       break;
     case 1:
       
       j++;
       break;
     case 2:
       swap(arr[j], arr[k]);
       k--;
       break;
     }
   }
   return;
}