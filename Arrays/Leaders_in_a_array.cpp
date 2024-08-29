#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

vector<int> superiorElements (vector<int>&a){
vector<int> ans;
int maxi = INT_MIN;
int n = a.size();
for(int i=n-1;i>=0;i--){
    if(a [i] > maxi){
ans. push_back(a[i]);
    }
maxi = max(maxi,a[i]);
}
// sort(ans. begin(), ans.end());
return ans;
}
int main(){
    vector<int> a = {9, 6, 3, 4, 5};
    vector<int> result = superiorElements(a);
    cout << "Superior elements are: ";
    for (int i = 0; i<result.size();i++) {
        cout << result[i] << " ";
        }
    
return 0;
}