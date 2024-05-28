#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long mod = 1e9 + 7;
		long long n, k; cin >> n >> k;
		long long res = 1;
		while (k > 0)
		{
			if (k % 2 == 1)
			{
				res *= n;
			}
			n *= n;
			k /= 2;
			res %= mod;
			n %= mod;
		}
		cout << res << endl;
	}
	return 0;
}
