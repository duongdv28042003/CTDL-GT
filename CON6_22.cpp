#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		int kt = -1;
		for (int i=0; i<n; i++)
		{
			cin >> a[i];
			if (a[i] == k) kt = 1;
		}
		cout << kt << endl;
	}
	return 0;
}
