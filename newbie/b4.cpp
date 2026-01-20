#include<bits/stdc++.h>
using namespace std;


int main(){
    int a;
    cin>>a;
    int arr[100];
    for(int i=0;i<a;i++){
        cout<<"arr["<<i<<"]";
        cin>>arr[i];

    }
    int max=arr[0];
    int max1;

    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max1=max;
            max=arr[i];
        }
        else{
            if(arr[i]>max1&&max>arr[i]){
                max1=arr[i];
            }
        }
    }
    cout<<max1;
    bool lasonguyento= true;
    if(max1<2){
        lasonguyento=false;
    }else{
        for(int i=2;i<=sqrt(max1);i++){
            if(max1%i==0){
                lasonguyento=false;
            }
        }
    }
    if(lasonguyento){
        cout<<"so ngto";
    }else{
        cout<<"ko phai so ngto";
    }
}