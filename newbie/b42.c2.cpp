#include<iostream>
#include<map>
using namespace std;
int main(){
     int n;
     cin>>n;
    map<int,int>dem;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        dem[x]++;
    }
    int max=0;
    int giatri=0;
    for(auto p:dem){
        if(p.second>=max){
            max=p.second;
            giatri=p.first;
        }
    }
    cout<<giatri<<endl;
    cout<<max;
}