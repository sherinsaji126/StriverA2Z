#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestSuccessiveElements(vector<int>nums){
int n=nums.size();
if (n==0) return 0;
int longest = 1;
unordered_set<int>st;
for(int i=0;i<n;i++){
st.insert(nums[i]);
}
for(auto it : st){
if(st.find(it-1) == st.end()){
int cnt = 1;
int x = it;
while(st. find(x+1)!=st.end()){
x = x + 1;
cnt = cnt+1;
}
longest = max(longest, cnt);
}
}
return longest;
}

int main(){
    vector<int>nums = {102,4,100,1,101,3,2,1,1};
    cout<< longestSuccessiveElements(nums) << endl;
    return 0;
}