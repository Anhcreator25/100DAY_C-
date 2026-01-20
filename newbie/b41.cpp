#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=1;i<n;i++){
        if(i%k==0){
           sum+=i;
        }
    }
    cout<<sum;
}