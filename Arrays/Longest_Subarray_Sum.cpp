#include<bits/stdc++.h>
using namespace std;

int longSubarraySum(vector<int>num,int k){

int len=0;
map<int,int>mpp;
int presum=0;
for(int i=0;i<num.size();i++){

presum=presum+num[i];
if(presum==k){
    len=i+1;
}
else
for(auto itr:mpp){
    if(mpp.find(presum-k)!=mpp.end()){
       len=max(len,i-mpp[presum-k]) ;
    }
}
if(mpp.find(presum)==mpp.end()){
mpp[presum]=i;
}
}
return len;
}

int main(){
    int k=0;
//  vector<int>num{1,2,3,1,1,1,1,3,2,3};
vector<int>num{1,-1,3,2,-2,-8,1,7,10,23};
 cout<<longSubarraySum(num,k);
    return 0;
}