#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int A[100];
    int B[100];
    int  C[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
      int f=0;
        int g=0;
    for(int i=0;i<n;i++){
      
        if(A[i]>=0){
            B[f++]=A[i];
        }else{
            if(A[i]<0){
                C[g++]=A[i];
            }

        }
    }
    for(int i=0;i<f;i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
       for(int i=0;i<g;i++){
        cout<<C[i]<<" ";
}
}
