#include<bits/stdc++.h>
using namespace std;
void tamgiac(double a,double b,double c){
    
    if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0)){
        cout<<"latamgiac";
    }else{
        cout<<"khong la tam giac";
    }

}
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    tamgiac(a,b,c);
}

