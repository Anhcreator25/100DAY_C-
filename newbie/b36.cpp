#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    double arr[100];
    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        double sum = 0.0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i]/n;
        }
        cout <<fixed<<setprecision(2)<< sum;
    }
}