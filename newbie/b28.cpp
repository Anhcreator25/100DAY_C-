#include<iostream>

using namespace std;

int main(){
   int n;
   cin>>n;
   int a[100];
   int count[100]={0};

   for(int i=0;i<n;i++){
      cin>>a[i];
      int gtri=a[i];
      count[gtri]++;
   }

   int max=0;
   int soTansoLonnhat=a[0];
   for(int i=0;i<100;i++){
      if(count[i]>max){
         max=count[i];
         soTansoLonnhat=i;
      }
   }
   cout<<soTansoLonnhat;
}