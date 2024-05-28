#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a;
		int n, k; cin >> n >> k;
		int res[n+1][k];
		res[0][0] = 0;
		for (int i=1; i<k; i++) res[0][i] = -293489;
		for (int i=1; i<=n; i++)
		{
			cin >> a; a%=k;
			for (int j=0; j<k; j++)
			{
				res[i][j] = max(res[i-1][j], res[i-1][(j+k-a)%k] + 1);
			}
		}
		cout << res[n][0] << endl;
	}
	return 0;
}
