#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int vitri=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
           if(arr[i]>max){
            max=arr[i];
            vitri=i;
           }
        }
    }
if(vitri==-1){
    cout<<"-1";
}else{
    cout<<vitri;
}
        
    }
