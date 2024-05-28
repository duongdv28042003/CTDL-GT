#include <bits/stdc++.h>
using namespace std;
int n, k;
int stringtonumber(string s)
{
	int res = 0, d = 0, i = s.length() - 1;
	while (i >= 0)
	{
		res += (s[i] - 48) * pow(2,d);
		d++; i--; 
	}
	return res;
}
string numbertostring(int d)
{
	string res = "";
	int a;
	while (d > 0)
	{
		a = d % 2;
		d/=2;
		res += a+48;
	}
	while (res.length() < n) res= res + '0';
	reverse(res.begin(), res.end());
	return res;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		cin >> n >> k;
		string s; cin >> s;
		int d = stringtonumber(s) + k + 1;
		int a = pow(2,n);
		d %= a;
		cout << numbertostring(d) << endl;
	}
	return 0;
}
