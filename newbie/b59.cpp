#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            found=false;
          
        }    
    }
    if(found){
        cout<<"doixung";
    }else{
        cout<<"ko doi xung";
    }
}
