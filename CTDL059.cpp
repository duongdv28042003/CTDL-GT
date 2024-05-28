#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>  n;
        long long a[n+1], b[n];
        for (long long i=1; i<=n; i++) cin >> a[i];
        for (long long i=1; i<=n-1; i++) cin >> b[i];
        for (long long i=1; i<=n; i++)
        {
            if (a[i] != b[i])
            {
                cout << i << endl;
                break; 
            }
        }
    }
    return 0;
}