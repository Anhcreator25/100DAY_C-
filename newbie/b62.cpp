#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,vitri;
    cin>>x;
    cin>>vitri;
    
    for(int i=n;i>vitri;i--){
        arr[i]=arr[i-1];
    }
    arr[vitri]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}