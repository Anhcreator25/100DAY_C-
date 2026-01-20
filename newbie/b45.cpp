#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &c:arr){
        cin>>c;
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"-1";
}