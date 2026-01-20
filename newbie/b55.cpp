#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int min=arr[0];
    int giatri;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            giatri=i;
            
        }
        
    }
    cout<<giatri;
}