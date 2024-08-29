#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    void setZeroes(vector<vector<int>>&matrix) {
    int col=1;
     for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
      if(matrix[i][j]==0){
      
      matrix[i][0]=0;  
      if(j!=0)
        matrix[0][j]=0; 
        else
        col=0;
        
      }
    }
  }
     for(int i=1;i<matrix.size();i++){
    for(int j=1;j<matrix[i].size();j++){
       if(matrix[i][0]==0 || matrix[0][j]==0 ){
            matrix[i][j]=0;
       }
    }
        }
    if(matrix[0][0]==0){
    for(int j=0;j<matrix[0].size();j++){
        
            matrix[0][j]=0;
        }
    }
    if(col==0){
    for(int i=0;i<matrix.size();i++){
        
            matrix[i][0]=0;
        }
       }
    
    }
};
int main(){
vector<vector<int>>matrix{{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
Solution s;
s.setZeroes(matrix);
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
