#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums) {
    vector<vector<int>> ans;   
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;  // Skip duplicates for 'i'
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum > 0) {
                r--;
            } else if (sum < 0) {
                l++;
            } else {
                vector<int> temp = {nums[i], nums[l], nums[r]};
                ans.push_back(temp);
                l++;
                r--;
                while (l < r && nums[l] == nums[l-1]) l++;  // Skip duplicates for 'l'
                while (l < r && nums[r] == nums[r+1]) r--;  // Skip duplicates for 'r'
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, -1, -1, 0};
    vector<vector<int>> result = threeSum(nums);
    for (auto vec : result) {
        for (auto num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
