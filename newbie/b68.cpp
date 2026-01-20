#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c;
    cin>>c;
    for(int i=0;i<n;i++){
          if(arr[i]>c){
            cout<<arr[i]<<" ";
          }
    }
    
}