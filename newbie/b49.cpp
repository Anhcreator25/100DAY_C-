#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    vector<int>arr(n);
    for(auto &k:arr){
        cin>>k;
     
    }
    cin>>x>>y;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]>=x&&arr[i]<=y&&arr[i]%2==0){
            cout<<arr[i]<<" ";
            found=true;
        }
    }
    if(!found){
        cout<<"-1";
    }

}