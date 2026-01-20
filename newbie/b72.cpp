#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[100];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    bool found=false;
   for(int i=0;i<m;i++){
    int dem=0;
    for(int j=0;j<m;j++){
        if(arr[i]==arr[j]){
            dem++;
        }
    }
    if(dem==1){
        cout<<arr[i]<<" ";
         found=true;
    } 

   }
   if(!found){
    cout<<"None";

   }

}