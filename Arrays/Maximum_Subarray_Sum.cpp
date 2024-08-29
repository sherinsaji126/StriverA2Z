#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int>nums){
long long sum = 0, maxi = LONG_MIN;
for(int i = 0; i<nums.size(); i++){
sum += nums[i];

if(sum> maxi){
maxi = sum;
}
if (sum < 0) {
sum=0;
}
}

return maxi;
}
int main(){
    vector<int>nums{-2,-3,4,-1,-2,1,5,-3};
    cout<<maxSubarraySum(nums);
    
    return 0;
}