#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int a=n.length();
  int i=0;
    for( i=0;i<a-1;i++){
        if(n[i]<=n[i+1]){
            continue;
        }else{
            break;
        }
    }
    for(int j=i;j<a-1;j++){
        if(n[j]>n[j+1]){
            continue;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}