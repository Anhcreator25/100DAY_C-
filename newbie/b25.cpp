#include<iostream>
#include<string>

using namespace std;
int main(){
    string n;
    cin>>n;
    int a=n.length();
    for(int i=0;i<a-1;i++){
        if(n[i]%2==n[i+1]%2){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}