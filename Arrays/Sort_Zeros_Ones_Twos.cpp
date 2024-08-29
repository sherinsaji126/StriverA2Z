#include<iostream>
#include<vector>
using namespace std;

void dnf(vector<int>&nums){
int low=0,high=nums.size()-1,mid=0;

while(mid<=high){
    if(nums[mid]==1){
        mid++;
    }else if(nums[mid]==0){
        swap(nums[mid],nums[low]);
        low++,mid++;
    }else{
        swap(nums[mid],nums[high]);
        high--;
    }
}

}

int main(){
    vector<int>nums{0,1,1,0,1,2,1,2,0,2,0};
dnf(nums);
for(auto vec: nums){
    cout<<vec<<" ";
}
return 0;
}