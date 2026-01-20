#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=a.length();
    int sum=0;
    for(int i=0;i<b;i++){
        int ketqua=pow(a[i]-'0',3);
        sum+=ketqua;
    }
     cout<<sum<<endl;
     int c=stoi(a);//chuyen kieu string sang nguyên
    if(sum==c){
        cout<<"yes";
    }else{
        cout<<"no";
    }
  
}