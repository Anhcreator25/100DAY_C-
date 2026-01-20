#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[200];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    int hieutoithieu=INT_MAX;
    int f,d;
    for (int i = 0; i < n; i++) {  
        for (int j = i + 1; j < n; j++) {
                int tong=arr[i]+arr[j];
                int hieu=abs(tong-b);
                if(hieu<hieutoithieu){
                    hieutoithieu=hieu;
                    f=arr[i];
                    d=arr[j];
                }
                
        
        }
   
    }
}
