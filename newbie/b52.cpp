#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;   
int arr[100]; 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int dem=0;

for(int i=0;i<n;i++){
    int a=arr[i];
    if(arr[i]<2){
        continue;
    }else{
        bool found1=true;
        for(int j=2;j<=sqrt(a);j++){
            if(a%j==0){
                found1=false;
            }
        }
        if(found1){
            dem++;
            
        }
    }
}
cout<<dem;
}