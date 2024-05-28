#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

long long luythua(long long n, long long k)
{
	long long res = 1;
	while (k > 0)
	{
		if (k % 2 == 1)
		{
			res *= n;
			res %= mod;
		}
		n *= n;
		k /= 2;
		n%=mod;

	}
	return res;
}

int sodao(int n)
{
	int res = 0;
	while (n > 0)
	{
		res = res*10 + n%10;
		n/=10;
	}
	return res;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << luythua(n,sodao(n))<< endl;
	}
	return 0;
}
