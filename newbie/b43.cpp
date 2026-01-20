#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
   
    int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>x;
int vitri=-1;
for(int i=0;i<n;i++){
    if(arr[i]==x){
        vitri=i;    
    }
    }
    cout<<vitri;
}
