#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long>> v(n,vector<long long>(n));
  for(int i=0;i<n;i++){
    v[i].resize(i+1);
    v[i][0]=1;
    v[i][v[i].size()-1]=1;
    for(int j=1;j<i;j++){
      
      
        v[i][j]=v[i-1][j-1]+v[i-1][j];
      
    }

  }
  return v;

}
