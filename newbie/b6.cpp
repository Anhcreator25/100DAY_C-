#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=n-1;i>=n-k;i--){
         sum+=arr[i];
    }
    cout<<sum;
  
}      

    
        
        
    

    
