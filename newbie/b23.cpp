#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        int i=1;
        int sum=0;
        while(n>=i){
           sum+=i*i;
             i++;
        }
        cout<<sum;
    }else{
        cout<<"cut";
    }
}