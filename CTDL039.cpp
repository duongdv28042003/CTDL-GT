#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a + n );
        int d = 1000000007, s=0;
        for (int i=0; i<n; i++)
        {
            s += a[i] * i;
            if (s > d)
            {
                s %= d;
            }
        }
        cout << s << endl;
    }
    return 0;
}