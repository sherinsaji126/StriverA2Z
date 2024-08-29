#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0,cnt=0;
        map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
         presum+=nums[i];
         int remove=presum-k;
         cnt+=mpp[remove];
         mpp[presum]+=1;  
        }
        return cnt;
    }
};
int main(){
 
 Solution s;
 vector<int>v={1,2,3,-3,1,1,1,1,4,2,-3};
 int k=3;
 cout<<s.subarraySum(v,k)<<endl;
 
 

    return 0;
}