#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[200];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            bool found=true;
            if(arr[i]<2){
                found=false;
            }else{
                for(int j=2;j<=sqrt(arr[i]);j++){
                    if(arr[i]%j==0){
                        found=false;
                    }
                }
            }
            if(found){
            sum+=arr[i];
            }
        } 
    }
    cout<<sum;
    
  
}


  
