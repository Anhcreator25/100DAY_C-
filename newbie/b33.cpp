#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
       int sum=0;
       for(int i=1;i<n;i++){// co the i<=n/2 toi uu hoa vong lap
           if(n%i==0){
            sum+=i;
           }
       }
       if(sum==n){
        cout<<"yes";
       }else{
        cout<<"no";
       }
      
        
    }  
    else{
       cout<<"no";
    }
}