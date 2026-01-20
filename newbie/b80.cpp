#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string b="";
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            if(s[i]>='a'&&s[i]<='z'){
                b+=char(s[i]-32);
            }else{
               b+=s[i];
              
            }
        }else{
            if(s[i]>='A'&&s[i]<='Z'){
                b+=char(s[i]+32);
            }else{
                b+=s[i];
            }
        }
    }
    cout<<b;
}