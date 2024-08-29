#include<iostream>
#include<vector>
using namespace std;
class Rotate_K_Places {
public: 
        //optimal approach
        // int n=nums.size();
        // k=k%n;
        // reverse(nums.begin(),nums.begin()+n-k);
        // reverse(nums.begin()+n-k,nums.end());
        // reverse(nums.begin(),nums.end());
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>nums2;
        for(int i=n-k;i<n;i++){
            nums2.push_back(nums[i]);
        }
        for(int i=(n-k)-1;i>=0;i--){
           nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
        nums[i]=nums2[i];
        }
    }
};
int main(){
    vector<int>nums{1,2,3,4,5,6,7};
    Rotate_K_Places obj;
    obj.rotate(nums,3);
    for(auto vec:nums){
        cout<<vec<<" ";
    }
}