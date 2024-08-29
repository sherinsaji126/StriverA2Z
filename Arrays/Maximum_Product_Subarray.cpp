#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int maxi=INT_MIN;
   
    int prefixproduct=1;
    int suffixproduct=1;
    for(int i=0;i<nums.size();i++){

       if(prefixproduct==0) prefixproduct=1;
       if(suffixproduct==0) suffixproduct=1;
      
        prefixproduct=prefixproduct*nums[i];
        suffixproduct=suffixproduct*nums[n-i-1];
        maxi=max(maxi,max(prefixproduct,suffixproduct));
        
        
    }
   return maxi;
}

int main(){

// vector<int>nums{-2,3,4,-1,0,-2,3,1,4,0,4,6,-1,4};
vector<int>nums{2,3,-2,4};
cout<<maxProduct(nums);
 
return 0;
    }