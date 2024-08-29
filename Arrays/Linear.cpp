#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size,key,flag=0;
cout<<"enter the size and key to find: ";    
cin>>size>>key;    
vector<int>arr(size);
for(int i=0; i<size; i++){
    cin>>arr[i];
}
for (int i=0; i<size; i++){
   if(arr[i]==key){
    cout<<"the position is: "<<i+1;
    flag=1;
    break;
   }

}
if(flag==0){
    cout<<"not found";
}
return 0;
}