#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int d=0;
        for (int i=0; i<10; i++)
        {
            while (n / a[i] > 0)
            {
                d+= n/a[i];
                n %= a[i];
            }
        }
        cout << d << endl;
    }
    return 0;
}