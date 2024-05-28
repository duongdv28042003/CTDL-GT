#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int a[n+1];
        for (int i=1; i<=n; i++) cin >> a[i];
        int d=1;
        while ( a[d] < k ) d++;
        if (a[d] == k) cout << d << endl;
        else cout << "NO" << endl;
    }
    return 0;
}