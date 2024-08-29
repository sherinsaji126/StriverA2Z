#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int>&nums, int target){
map<int,int>mpp;
int n = nums.size();
for (int i= 0;i<n; i++){
int num = nums[i];
int moreNeeded = target - num;
if (mpp. find(moreNeeded) != mpp.end()){
return {mpp[moreNeeded], i};
}
mpp[num]= i;
}
return {-1, -1};
    }
};

int main(){
    vector<int>nums{2,6,5,8,13};
    Solution s;
    vector<int> arr=s.twoSum(nums,14);
  for(auto itr:arr){
    cout<<itr<<" ";
  }
}