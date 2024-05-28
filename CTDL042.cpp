#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n], b[n];
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i] > a[j]) swap(a[i], a[j]);
                if (b[i] < b[j]) swap(b[i], b[j]);
            }
        }
        long long s=0;
        for (int i=0; i<n; i++) s = s + a[i] * b[i];
        cout << s << endl;
    }
    return 0;
}