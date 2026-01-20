#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
      getline(cin,s);
    string b;
    for(int i=0;i<s.length();i++){
            char a=s[i];
        if(i%2==0){
            b+=char(a+1);
        }else{
             b+=char(a-1);
        }
    }
    cout<<b;
}