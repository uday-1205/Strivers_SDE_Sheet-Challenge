#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int demo[9]={1,2,5,10,20,50,100,500,1000};
    int i=8;
    while(i>=0 && demo[i]>amount){
         i--;
    }
    int j=i;
    int cnt=0;
    while(j>=0 && amount!=0){
        if(amount>=demo[j]){
            amount=amount-demo[j];
            cnt++;
        }
        else{
           j--;

        }
    }
    return cnt;


}
