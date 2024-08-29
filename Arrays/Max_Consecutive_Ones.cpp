#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>arr){
int xorr=0;
for(int i=0;i<arr.size();i++){ 
xorr=xorr^arr[i];
}
return xorr;
}

int main(){

vector<int>arr{1,1,2,3,3,8,8};
cout<<getSingleElement(arr)<<endl;
    return 0;
}