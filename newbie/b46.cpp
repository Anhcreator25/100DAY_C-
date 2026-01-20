#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
       for(auto &k: arr){
        cin>>k;
       }

       for(int i=n-1;i>=0;i--){
        if(arr[i]>0){
            cout<<arr[i];
            return 0;
        }
       }
       cout<<"-1";

}