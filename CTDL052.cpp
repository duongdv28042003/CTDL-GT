#include <bits/stdc++.h>
using namespace std;

void sum (long long a, long long b, int k)
{
	int n[50] = {0}, m[50] = {0};
	int res[51] = {0};
	if (b > a) swap(a,b);
	int d = 1;
	while (a > 0)
	{
		n[d] = a%10; a/=10;
		m[d] = b%10; b/=10;
		d++;
	}
	for (int i=1; i<d; i++)
	{
		res[i] += (n[i] + m[i]) % k;
		res[i+1] += (n[i] + m[i]) / k;
	}
	if (res[d] == 0) d--;
	for (int i=d; i>=1; i--) cout << res[i];
	cout << endl;
	return;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int k, a, b; cin >> k >> a >> b;
		sum(a,b,k);
	}
	return 0;
}