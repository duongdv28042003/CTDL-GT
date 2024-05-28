#include <bits/stdc++.h>
using namespace std;

void sinh(string s)
{
	
	int l = s.length();
	vector <int> v (l, 1);
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (s[i] > s[j]) v[i] = max (v[i], v[j] + 1);
		}
	}
	cout << *max_element(v.begin(), v.end()) << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]); 
		sinh(s);
	}
	return 0;
}
