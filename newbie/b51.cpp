#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     int dem=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
         int sum=0;
    
        for(int j=1;j<a;j++){
            if(a%j==0){
                sum+=j;
        
        }
        }
        if(sum==a){
            cout<<a;
            return 0;
           
        }else{
          dem++;
        }
       
    }
    if(dem==n){
        cout<<"-1";
    }
}



