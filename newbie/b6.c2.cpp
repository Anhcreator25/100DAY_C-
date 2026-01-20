#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]";
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int sum=0;
    for(int i=n-1;i>=n-k;i--){
        sum+=arr[i];
    }
    cout<<sum;
}