#include <bits/stdc++.h>
using namespace std;
long long bs[501] = {0};
string s = "0000000000";

long long chuyenthanhso(string s)
{
	long long n = 0;
	int i = 0;
	while (i < s.length())
	{
		n = n*10 + (s[i] - 48);
		i++;
	}
	return n;
}

void boiso()
{
	vector <long long> v;
	bool ok = 1;
	while (ok)
	{
		int d = 9;
		while (s[d] == '9') 
		{
			s[d] = '0'; d--;
		}
		if (d < 0) ok = 0;
		else
		{
			s[d] = '9';
			v.push_back(chuyenthanhso(s));
		}
	}
	for (int i=1; i<= 500; i++)
	{
		for (int j = 0; j<v.size(); j++)
		{
			if (bs[i] == 0 && v[j] % i == 0) bs[i] = v[j];
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
		cout << bs[n] << endl;
	}
	return 0;
}