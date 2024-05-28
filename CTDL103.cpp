#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n+1][3];
	for (int i = 1; i<=n; i++) cin >> a[i][1] >> a[i][2];
	int res [n+1][n+1];
	memset(res, 0, sizeof(res));
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			res[i][a[i][j]] = 1;
		}
	}
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=n; j++) cout << res[i][j] << " ";
		cout << endl;
	}
	return 0;
}
