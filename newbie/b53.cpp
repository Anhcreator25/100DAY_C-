 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int a;
    cin>>a;
    int arr[100];
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }int sum=0;
    for(int i=0;i<a;i++){
        if(pow(sqrt(arr[i]),2)==arr[i]){
            sum+=arr[i];
        }
    }
    cout<<sum;
 }