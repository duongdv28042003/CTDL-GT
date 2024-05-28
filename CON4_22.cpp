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
		int i = 0;
		while (a[i] < k) i++;
		if (a[i] == k) cout << i+1;
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
