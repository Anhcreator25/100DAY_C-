#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
  double max=a;
  if(max<b){
    max=b;
  }
  if(max<c){
    max=c;
  }
  if(max<d){
    max=d;
  }
  cout<<max;
    
}