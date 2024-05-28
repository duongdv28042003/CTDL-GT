#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int k; string s; cin >> k >> s;
		for (int i=0; i< s.length() && k > 0; i++)
		{
			int n = s.length() - 1;
			char max = s[n];
			for (int j = s.length() - 1; j > i; j--)
			{
				if (max < s[j]) 
				{
					max = s[j];
					n = j;
				}
			}
			if (s[i] < max) 
			{
				swap(s[i], s[n]);
				k--;
			}
		}
		cout << s << endl;
	}
	return 0;
}