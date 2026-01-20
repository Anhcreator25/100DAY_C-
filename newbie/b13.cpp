#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b==0){
        cout<<"KO CHIA DUOC";
    }else{
        double c=(double)a/b;
        cout<<fixed<<setprecision(1)<<c;
    }
}