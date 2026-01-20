#include<bits/stdc++.h>
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
        int max=0;
        int giatri=arr[0];
        int dem=1;
             for(int i=1;i<n;i++){
                if(arr[i]==arr[i-1]){
                    dem++;
                }else{
                    dem=1;
                }
             
             if(dem>=max){
                max=dem;
                giatri=arr[i];
             
             }
            }
            cout<<"giatri: "<<giatri<<endl;
            cout<<"tanso: "<<max;
        }
        