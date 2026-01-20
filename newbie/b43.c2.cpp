#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> arr(n);
    for(auto &k:arr){
        cin>>k;
    }
    cin>>x;
    int vitri=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            vitri=i;
            break;
        }
    }
    cout<<vitri;
}