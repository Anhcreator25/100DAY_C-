#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double x,x1,x2;
    if(a==0){
        cout<<"pt bac nhat :";
         x=-c/b;
        cout<<x;
    }else{
        double delta=b*b-4*a*c;
        if(delta<0){
            cout<<"pt vo nghiem : ";
        }else{
            if(delta==0){
                cout<<"Nghiem kep : ";
                  x=-b/(2*a);
                  cout<<x;
            }else{
              cout<<" Có 2 nghiệm phân biệt: "<<endl;
               x1=(-b-sqrt(delta))/(2*a);
               x2=(-b+sqrt(delta))/(2*a);
               cout<<x1<<endl<<x2;
            }
        }
    }
}