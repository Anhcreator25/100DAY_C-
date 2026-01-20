#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,s;
    cin>>h>>m>>s;
    if((h>=0&&h<=23)&&(m>=0&&m<=59)&&(s>=0&&s<=59)){
        cout<<"YES";
    }
    else{
        cout<<"no";
    }

}