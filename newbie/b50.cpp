#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &k:arr){
        cin>>k;
    }
 
    bool found=false;
    for(int i=0;i<n;i++){
        int so=arr[i];
          if(so<2){
            continue;
          }else{
            bool found1=true;
            for(int j=2;j<=sqrt(so);j++){
                if(so%j==0){
                    found1=false;
                    
                }
            }
            if(found1){
                cout<<so;
             return 0;
                found=true;
            }
          }
    }
    if(!found){
        cout<<"-1";
    }
       return 0;
}
   
