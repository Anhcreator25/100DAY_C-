#include<bits/stdc++.h>
using namespace std;
 int main(){
    int m;
    cin>>m;
    map<int,int> dem;
    int arr[100];
    for(int i=0;i<m;i++){
        cin>>arr[i];
        dem[arr[i]]++;
    }
    bool found=false;
    for(int i=0;i<m;i++){
        if(dem[arr[i]]==1){
            cout<<arr[i];
            found=true;
        }
    }
    
    if(!found){
        cout<<"none";
    }
}
 