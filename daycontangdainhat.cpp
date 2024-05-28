#include <bits/stdc++.h>
using namespace std;

int res(int n, int a[])
{
    int dp[n] = {1};
    for (int i=0; i<n-1; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (a[j] > a[i]) dp[j] = max(dp[i], dp[j] + 1);
        }
    }
    int max = dp[0];
    for (int i=0; i<n; i++) 
    {
        if (max < dp[i]) max = dp[i];
    }
    return max;
}

int main()
{
    int t; cin >> t ;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        cout << res(n, a) << endl;
    }
    return 0;
}