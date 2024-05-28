#include <bits/stdc++.h>
using namespace std;
string s = "000000000";
int n = 9;
long long a[101] = {0};
bool ok = 1;
long long stringtonumber(string s)
{
	long long res = 0;
	int i = 0;
	while (i < s.length())
	{
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return res;
}
vector <long long> v;
void boiso()
{
	while (ok)
	{
		int d = n - 1;
		while (s[d] == '9') 
		{
			s[d] = '0'; d--;
		}
		if (d < 0) ok = 0;
		else
		{
			s[d] = '9';
			v.push_back(stringtonumber(s));
		}
	}
	for (int i=1; i<=100; i++)
	{
		for (int j = 0; j<v.size(); j++)
		{
			if (a[i] == 0 && v[j] % i == 0) a[i] = v[j];
		}
	}
	return;
}
int main()
{
	boiso();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}
