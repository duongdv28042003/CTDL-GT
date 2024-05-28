#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int n = s.length();
		int max = 0;
		map <char, int> mp;
		for (int i=0; i<n; i++)
		{
			mp[s[i]]++;
			if (mp[s[i]] > max) max = mp[s[i]];
		} 
		if (max <= n/2) cout << "1";
		else cout << "-1";
		cout << endl;
	}
	return 0;
}
