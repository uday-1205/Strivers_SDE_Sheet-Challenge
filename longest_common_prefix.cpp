#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& v, int n) {
   string s="";
        int mini=INT_MAX;
        for(int  i=0;i<n;i++){
               mini=min(mini,static_cast<int>(v[i].length()));
        }
        for(int i=0;i<mini;i++){
            int c=0;
            int j;
            for( j=0;j<v.size()-1;j++){
                if(v[j][i]==v[j+1][i]){
                    c++;
                }
            }
            if(c==v.size()-1){
                s+=v[j][i];
            }
            else{
                break;
            }
        }
        return s;
        
}
