#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   string ketqua="";
   for(int i=0;i<a.length();i+=2){
    if(i+1<a.length()){
      ketqua+=a[i+1];
      ketqua+=a[i];
    }else{
        ketqua+=a[i];
    }
   }
   cout<<ketqua;
}