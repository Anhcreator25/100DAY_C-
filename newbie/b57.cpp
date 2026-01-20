#include<bits/stdc++.h>
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
        if(arr[i]%2!=0){
            dem++;
        }      
}
if(dem==n){
    cout<<"deu la so le";
}else{
    cout<<"co so chan";
}

}