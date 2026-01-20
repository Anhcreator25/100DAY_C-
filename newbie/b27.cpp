#include<iostream>
#include<string>
using namespace std;
int main(){

    string a;
    cin>>a;
    int b=a.length();
    int sum=0;
    int dau=1;
    for(int i=0;i<b;i++){
        sum+=dau*(a[i]-'0');

        dau*=-1;
    }
    cout<<sum;
    
}