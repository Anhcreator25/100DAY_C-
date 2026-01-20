
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sochuoi=1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]+1){
            sochuoi++;
        }
        
    }
    cout<<"số chuổi :"<<sochuoi<<endl;
    int demchuoi=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]+1){
          demchuoi++;
        }else{
             cout<<"độ dài chuổi: "<<demchuoi<<endl;
            demchuoi=1;
        }
    }
    
    cout<<"độ dài chuổi: "<<demchuoi<<endl;
}