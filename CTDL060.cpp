#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int d = 0;
        int n; cin >> n;
        int a[n+1];
        for (int i=1; i<=n; i++) 
        {
            cin >> a[i];
            if(a[i] == 0) d++;
        }
        cout << d << endl;
    }
    return 0;
}