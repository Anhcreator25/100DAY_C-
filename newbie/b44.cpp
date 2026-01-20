#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<double> arr(n);
    for(auto &k:arr){
        cin>>k;
    }
    for(int i=0;i<n;i++){
       if(arr[i]<0){
        cout<<arr[i];
        return 0;
       }
    }
    cout<<"1";

}