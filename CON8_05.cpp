#include <bits/stdc++.h>
using namespace std;

string binary(int n)
{
	string s = "";
	int a;
	while (n > 0)
	{
		a = n % 2;
		n /= 2;
		s += a+48;
	}
	reverse(s.begin(), s.end());
	return s;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i=1; i<=n; i++) cout << binary(i) << " ";
		cout << endl;
	}
	return 0;
}
