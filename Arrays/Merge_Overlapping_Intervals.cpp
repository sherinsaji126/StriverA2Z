#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>intervals){
vector<vector<int>> ans;
sort(intervals.begin(),intervals.end());
for(int i=0;i<intervals.size();i++){
    if(ans.empty()|| intervals[i][0]>ans.back()[1]){
    
        ans.push_back(intervals[i]);
    }
    else{
        ans.back()[1]=max(ans.back()[1],intervals[i][1]);
    }
}
return ans;

}

int main(){
    vector<vector<int>>intervals{{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector<vector<int>>res=mergeOverlappingIntervals(intervals);
    for(auto vec:res){
        for(auto num:vec){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}