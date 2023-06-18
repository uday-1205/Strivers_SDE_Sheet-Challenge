#include <bits/stdc++.h> 
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int i=0;
    int j=mat[0].size()-1;
    int n=mat.size();
    while(i<n && j>=0){
       if(target== mat[i][j]){
           return true;
       }
       else if(target>mat[i][j]){
           i++;
       }
       else{
           j--;
       }
    }
    return false;
        
}