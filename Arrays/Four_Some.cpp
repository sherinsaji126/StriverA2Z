#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums,int target){
    vector<vector<int>> ans;   
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for (int i = 0;i < n; i++){
        if (i > 0 && nums[i] == nums[i-1]) continue;
          for (int j= i+1;j < n; j++){
        if (j != i+1 && nums[j] == nums[j-1]) continue;
        int l = j + 1, r = n - 1;
        while (l < r) {
            long long sum = nums[i] ;
            sum +=nums[j];
            sum +=nums[l];
            sum +=nums[r];
            if (sum > target) {
                r--;
            } else if (sum < target) {
                l++;
            } else {
                vector<int> temp = {nums[i], nums[j],nums[l], nums[r]};
                ans.push_back(temp);
                l++;
                r--;
                while (l < r && nums[l] == nums[l-1]) l++;  // Skip duplicates for 'l'
                while (l < r && nums[r] == nums[r+1]) r--;  // Skip duplicates for 'r'
            }
        }
    }
}
    return ans;
}

int main() {
    vector<int> nums = {5,4,3,2,1,5,4,3,2,1,4,3,2,1};
    int target=8;
    vector<vector<int>> result = threeSum(nums,target);
    for (auto vec : result) {
        for (auto num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
