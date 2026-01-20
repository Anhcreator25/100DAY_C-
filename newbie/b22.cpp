#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        int sum=0;
        int i=1;
        while(n>=i){
            
            sum+=i;
            i++;
        }
        cout<<sum;
    }
    else{
        cout<<"not valid";
    }
}