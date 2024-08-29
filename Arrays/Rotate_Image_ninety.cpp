#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    void rotateImage(vector<vector<int>>&matrix){
    int n = matrix.size();
// transpose
for(int i=0;i<n-1;i++){
    for (int j= i+1; j<n; j++) {
swap(matrix[i][j],matrix[j][i]);
    }
}
//reverse
for(int i= 0;i<n;i++){
reverse (matrix[i].begin(), matrix[i].end());
    }
    }
};
int main(){
vector<vector<int>>matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
Solution s;
 s.rotateImage(matrix);

for(auto vec:matrix){
    for(auto num:vec){
        cout<<num<<" ";
        }
        cout<<endl;
}
    return 0;
}
