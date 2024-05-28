#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >>n >> k;
        int w[n+1], v[n+1];
        for (int i=1; i<=n; i++) cin >> w[i];
        for (int i=1; i<=n; i++) cin >> v[i];
        int dp[n+1][k+1]; //gia tri lon nhat cua cai tui khi lua chon cac do vat co trong luong la j
        // dp[i][j] = dp[i-1][j] neu khong lua chhon vat vao tui
        //          = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
        memset(dp, 0, sizeof(dp));
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=k; j++)
            {
                dp[i][j] = dp[i-1][j];
                if (j>=w[i]) dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
        cout << dp[n][k] << endl;
    }
    return 0;
}