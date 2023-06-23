#include<bits/stdc++.h>
bool possible(int row,int col,int color,int matrix[9][9]){
    for(int i=0;i<9;i++){
        if(matrix[row][i]==color){
            return false;
        }
         if(matrix[i][col]==color){
            return false;
        }
        if(matrix[3*(row/3)+i/3][3*(col/3)+i%3]==color){
      return false;
        }
    }
    return true;
}
bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(matrix[i][j]==0){
                for(int fill=1;fill<=9;fill++){
                    if(possible(i,j,fill,matrix)){
                        matrix[i][j]=fill;
                        if(isItSudoku(matrix)==true){
                            return true;
                        }
                        else{
                            matrix[i][j]=0;
                        }
                    }
                }
                return false;
            }
            
        }
        
    }
    return true;
}


