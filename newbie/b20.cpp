#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[]={a,b,c};

    int solonnhat=arr[0];
    int solonth2=arr[0];
        for(int i=0;i<=2;i++){
            if(arr[i]>solonnhat){
                solonth2=solonnhat;
                solonnhat=arr[i];
                
            }else if(arr[i]>=solonth2&&solonnhat>=arr[i]){
                    solonth2=arr[i];
            }
        }
        cout<<solonth2<<endl;
}