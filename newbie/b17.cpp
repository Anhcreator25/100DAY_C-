#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(c+a>b)&&(b+c>a)){
        if(a==b&&b==c){
            cout<<"tgdeu";
        }
        
        if(a==b||b==c||a==c){
            cout<<"tgcan";
        }else{
            cout<<"tgthuong";
        }
       if((a*a+b*b==c*c)&&(a*a+c*c==b*b)&&(c*c+b*b==a*a)){
        cout<<"tgvuong";
       }
       if(((a*a+b*b==c*c)&&(a*a+c*c==b*b)&&(c*c+b*b==a*a))&&(a==b||b==c||a==c)){
        cout<<"tgvuongcan";
       }
       
    }else{
        cout<<"ko phai tam giac";
    }
}