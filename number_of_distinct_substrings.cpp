#include <bits/stdc++.h> 
using namespace std;
int distinctSubstring(string &word) {
    set<string> set;
    for(int i=0;i<word.length();i++){
        for(int j=i;j<word.length();j++){
            set.insert(word.substr(i,j-i+1));
        }
    }
    return set.size();

}
