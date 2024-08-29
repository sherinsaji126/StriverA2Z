#include<bits/stdc++.h>
using namespace std;
int majorityElement (vector<int>v){
int cnt = 0;
int el;
for(int i= 0;i<v.size(); i++){
if (cnt == 0){
cnt=1;
el=v[i];
}else if (v[i]==el){
cnt++;
}
else{
cnt--;
}

int cntl = 0;
for(int i=0;i<v.size();i++){
if(v[i]== el)cntl++;
}
if(cntl>(v.size()/2)){
return el;
}
}
return -1;
}
int main(){
    vector<int>v{7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    cout<<majorityElement(v)<<endl;
    return 0;
}