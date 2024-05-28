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
        while (n>0)
        {
            cout << '[';
            for (int i=0; i<n; i++) 
            {
                cout << a[i];
                if (i<n-1) cout << ' ';
            }
            cout << ']' << endl;
            for (int i=0; i<n-1; i++) a[i] = a[i] + a[i+1];
            n--;
        }
    }
    return 0;
}