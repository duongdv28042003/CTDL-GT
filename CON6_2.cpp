#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i<n; i++) cin >> a[i];
		int res[n] = {0};
		for (int i = 0; i<n; i++)
		{
			res[i] = k - a[i];
			if (res[i] < 0) res[i] = -res[i];
		}
		for (int i = 0; i<n-1; i++)
		{
			for (int j = i+1; j<n; j++)
			{
				if (res[j] < res[i])
				{
					swap(res[j], res[i]);
					swap(a[j], a[i]);
				}
			}
		}
		for (int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
