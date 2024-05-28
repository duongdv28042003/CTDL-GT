#include <bits/stdc++.h>
using namespace std;

int xaucon(string s)
{
	int ans = 1;
	int n = s.length();
	int a[n][n] = {0};
	for (int i=0; i<n; i++ ) a[i][i] = 1;
	for (int len = 2; len <=n; len++)
	{
		for (int i = 0; i<n - len + 1; i++)
		{
			int j = i + len - 1;
			if (len == 2 && s[i] == s[j]) a[i][j] = 1;
			else a[i][j] = a[i+1][j-1] * int(s[i] == s[j]);
			if (a[i][j] == 1) ans = max(len, ans);
		}
	}
	return ans;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << xaucon(s) << endl;
	}
	return 0;
}
