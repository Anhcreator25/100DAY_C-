#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int dem=1;
int max=0;
int x=-1;
int vitri;
for(int i=1;i<n;i++){
    if(arr[i]==arr[i-1]){
        dem++;
    }else{
        dem=1;}
    
    if(dem>max){
        max=dem;
        x=arr[i-1]; 
    }
    }
    if(max>1){
        cout<<x;
    }else{
        cout<<"-1";
    }
}  
    
