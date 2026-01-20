#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    if(a==0&&b==0){
        cout<<"vosonghiem";
    }else{
        if(a==0){
            cout<<"vonghiem";
        }else{
            cout<<fixed<<setprecision(1)<<(-b)/a;
        }
    }

}