#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string b;
    for(int i=0;i<s.length();i++){
        char a=s[i];
         cout<<a;
       if(i%15==0){
          b+=char(a+5);
       }else{
        if(i%5==0){
            b+=char(a-3);
        }else{
            if(i%3==0){
                b+=char(a+2);
            }else{
                b+=a;
            }
        }
       }
    }
    cout<<b;
    
}