#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    stringstream ss(a);
    string word;
    string ketqua="";
    while(ss >> word){
        reverse(word.begin(),word.end());
        if(ketqua==""){
            ketqua=word;
        }else{
         ketqua+=" "+word;
        }
    }
    cout<<ketqua;
}
