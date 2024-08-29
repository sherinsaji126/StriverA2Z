#include<bits/stdc++.h>
using namespace std;

int subarray_XOR_K(vector<int>nums,int k){
int cnt=0;
int prexor=0;
map<int,int>hashmap;
 hashmap[0]=1;
 for(int i=0;i<nums.size();i++){
 prexor=prexor^nums[i];
 int val=prexor^k;
 cnt+=hashmap[val];
 hashmap[prexor]++;
 }
    return cnt;
}


int main(){
vector<int>nums{4,2,2,6,4};
cout<<subarray_XOR_K(nums,6);
    return 0;
}