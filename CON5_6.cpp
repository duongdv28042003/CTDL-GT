#include <bits/stdc++.h>
using namespace std;

int doixung(string s)
{
	int n = s.length();
	int a[n+1][n+1];
	memset(a, 0, sizeof(a));
	for (int i = 0; i<=n; i++) a[i][i] = 1;
	int res = 1;
	for (int len = 2; len <=n; len ++)
	{
		for (int i = 0; i < n - len + 1; i++)
		{
			int j = i + len - 1;
			if (s[i] == s[j])
			{
				if (len == 2) a[i][j] = 1;
				else a[i][j] = a[i+1][j-1];
			}
			if (a[i][j]) res = max(len, res);
		}
	}
	return res;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << doixung(s) << endl;
	}
	return 0;
}
