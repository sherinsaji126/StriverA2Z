#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingReapeatingNumbers(vector<int>arr){
long long n =arr.size();
long long SN=(n*(n+1))/2;
long long S2N=(n*(n+1)*(2*n+1))/2;
long long sum1=0,sum2=0;
for(int i=0;i<n;i++){
sum1+=arr[i];
sum2+=(long long)arr[i]*(long long)arr[i];
}
long long val1=sum1-SN;//x-y
long long val2=sum2-S2N;
val2=val2/val1;//x+y
long long x=(val1+val2)/2;
long long y=x-val1;

return {(int)x,(int)y};

}

int main(){
    vector<int>arr{4,3,6,2,1,1};
    vector<int>ans=findMissingReapeatingNumbers(arr);
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}