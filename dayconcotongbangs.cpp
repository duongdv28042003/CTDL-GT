#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,s; cin >> n >> s;
        int a[n+1];
        for (int i=1; i<=n; i++) cin >> a[i];
        int dp[s+1]; // có thể tạo được các tập con có tổng từ 0 đến s hay ko=
        memset(dp, 0, sizeof(dp)); // giả sử ban đầu ko thể
        dp[0] = 1; // với tổng bằng không thì tập rỗng
        for (int i=1; i<=n; i++)
        {
            for (int j = s; j >=a[i]; j--)
            {
                if (dp[j-a[i]] == 1) dp[j] = 1;
                // dp[j-a[i]] là tập con có tổng bằng j-a[i];
                // nếu có tập con đấy thì khi thêm a[i] vào sẽ có được tập con có tổng bằng j.
                
            }
        }
        for (int i=0; i<=s; i++) cout << dp[i] << " ";
    }
    return 0;
}