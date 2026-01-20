#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double sum=0;
    int dem=0;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0){
          sum+=arr[i];
          dem++;
        }
    }
   if(dem==0){
    cout<<"ko có số nào chia hết";
   }else{
    cout<<sum/dem;
   }

}