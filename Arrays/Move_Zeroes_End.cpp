#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        for(int i=0,index=0;i<nums.size();i++){
            if(nums[i]) {
                swap(nums[i], nums[index]);
                index++;
            }
        }
        for(auto vec: nums){
            cout<<vec<<" ";
        }
    }
    
};
int main(){
    vector<int>nums{1,0,3,4,5,0,0,6,4};
Solution obj;
obj.moveZeroes(nums);
    
}