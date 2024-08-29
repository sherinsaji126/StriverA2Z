#include<bits/stdc++.h>
using namespace std;

/*
type 1 when we have to find individual element with their given position;
int nCR(int row,int col){
int n=row-1;
int r=col-1;
int res=1;
for(int i=0;i<r;i++){
    res=res*(n-i);
    res=res/(i+1);
}
return res;
}

int main(){
    cout<<nCR(6,4);
    return 0;
} 
*/
//type 2 when we have to print pascal triangle for a given numRows;

vector<int>generateRow(int row){
long long ans = 1;
vector<int>ansRow;
ansRow.push_back(1);
for(int col = 1;col<row; col++){
ans=ans * (row - col);
ans =ans/(col);
ansRow.push_back(ans);
}
return ansRow;
}
vector<vector<int>>pascalTriangle(int numRows){
vector<vector<int>>ans;
for(int i=1; i<=numRows;i++){
ans.push_back(generateRow(i));
}
return ans;
}
int main(){
vector<vector<int>>nums=pascalTriangle(6);
for(auto vec:nums){
    for(auto num:vec){
        cout<<num<<" ";

}
cout<<endl;
}
    return 0;
}