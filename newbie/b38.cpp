#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = n; i >= 100; i--)
    {

        string d = to_string(i);
        int f = d.length();

        int sum = 0;
        for (int j = 0; j < f; j++)
        {
            int k = pow(d[j]-'0', 3);
            sum += k;
        }

        if (sum == i)
        {
            dem++;
        }
    }
    cout << dem;
}
