#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    vector<int>arr(n);
    for(auto &k:arr){
        cin>>k;
    }
  bool found=false;
    
    for(int i=0;i<n;i++ ){
        if(arr[i]>=x &&arr[i]<=y){
            cout<<arr[i]<<" ";
            found=true;
        } 
}
if(!found){
    cout<<"ko co so nào";
}
    
}
