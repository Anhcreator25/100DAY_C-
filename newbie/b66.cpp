#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int a[100];
    int b[100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[100]; 
    int g=0;
   
    for(int i=0;i<n;i++){
         bool found=true;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                found=false;
                break;
        }
    }
    if(found){
        c[g++]=a[i];
    }
}
    for(int i=0;i<g;i++){
        cout<<c[i];
    }
}
