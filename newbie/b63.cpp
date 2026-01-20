#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int A[100];
    int B[100];
    int C[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    int d=0;
    for(int i=0;i<n;i++){
        C[d++]=A[i];
        C[d++]=B[i];
    }
    for(int i=0;i<d;i++){
        cout<<C[i]<<" ";
    }

}