#include <bits/stdc++.h>
using namespace std;
int C[1001][1001];
long long mod = 1e9+7;
void tohop()
{
	for (int i=0; i<=1000; i++)
	{
		for (int j = 0; j<=i; j++)
		{
			if ( j == 0 || j == i) C[i][j] = 1;
			else 
			{
				C[i][j] = C[i-1][j-1] + C[i-1][j];
				C[i][j] %= mod;
			}
		}
	}
	return;
}
int main()
{
	tohop();
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		cout << C[n][k] << endl;
	}
	return 0;
}
