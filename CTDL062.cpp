#include <bits/stdc++.h>
using namespace std;
int daycon(int a[], int k, int s, int index)
{
	if (k==0)
	{
		if (s==0) return 1;
		else return 0;
	}
	int ans = 0;
	for (int i = index; i>=0 && a[i] * k >= s; i--)
	{
		if (a[i] <= s) ans += daycon(a,k-1,s-a[i],i-1);
	}
	return ans;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k, s;
		cin >> n >> k >> s;
		int a[n];
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		cout << daycon(a,k,s,n-1) << endl;
	}
	return 0;
}
