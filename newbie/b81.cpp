#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string b="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
            b+=char(s[i]+1);
        }else{
            if(s[i]>='0'&&s[i]<='9'){
                b+=char(s[i]+1);
            }else{
                b+=s[i];
            }
        }
    }
    cout<<b;
}