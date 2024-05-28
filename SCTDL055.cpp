#include <bits/stdc++.h>


using namespace std; 
const long long mod = 1000000007;
long long a[1000] ;

void fibo()
{
    a[0] = 0;
    a[1] = 1;
    for (int i=2; i<=1000; i++)
    {
        a[i] = a[i-1] + a[i-2];
        a[i] = a[i] % mod;
    }
    return;
}

int main()
{
    fibo();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}