#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection (vector<int>A,vector<int>B){
int n=A.size();
int m=B.size();
int i = 0;
int j = 0;
vector<int> ans;
while (i<n && j<m){
if (A[i] < B[j] ){
i++;
}
else if (B[j] < A[i]) {
j++;
}
else{
ans.push_back (A[i]);
i++;
j++;
}

}
return ans;
}
int main(){
    
    vector<int>res;
    vector<int>a{1,2,2,3,3,4,5,6};
    vector<int>b{2,3,3,5,6,6,7};
    res=findArrayIntersection(a,b);
    for(int vec:res){
        cout<<vec<<" ";
    }
    return 0;
}