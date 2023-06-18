#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int max_profit=0;
    int buy=prices[0];
    int n=prices.size();
    for(int i=1;i<n;i++){
        if(prices[i]-buy>max_profit){
            max_profit=prices[i]-buy;

        }
        if(prices[i]<buy){
            buy=prices[i];
        }
        

    }
    return max_profit;

}