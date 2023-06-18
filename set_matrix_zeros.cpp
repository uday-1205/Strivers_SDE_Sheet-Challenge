#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();
	int rows[n]={0};
	int cols[m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				rows[i]=1;
				cols[j]=1;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rows[i]|| cols[j]){
				matrix[i][j]=0;
			}
		}
	}
	return ;
}