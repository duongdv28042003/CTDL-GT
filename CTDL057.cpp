#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long n, x; cin >> n >> x;
        long long a[n];
        for (long long i=0; i<n; i++) 
        {
            cin >> a[i];
        }
        if (a[0] > x) cout << "-1" << endl;
        else
        {
            for (long long i=0; i<n; i++) 
            {
                if (a[i] > x)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}