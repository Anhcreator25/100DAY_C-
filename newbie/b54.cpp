#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    double sum=0.0;
    int dem=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
        if(a<2){
            continue;
        }else{
            bool found =true;
            for(int j=2;j<=sqrt(a);j++){
                if(a%j==0){
                    found =false;
                }
            }
            if(found){
                sum+=a;
                dem++;
            }
        }
    }
    cout<<fixed<<setprecision(2)<<sum/dem;
}