#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int n = s.length();
		stack <string> stk;
		for (int i = 0; i < n; i++)
		{
			if (isalpha(s[i])) stk.push(string(1,s[i]));
			else
			{
				string s1 = stk.top(); stk.pop();
				string s2 = stk.top(); stk.pop();
				string tmp = '(' + s2 + s[i] + s1 + ')';
				stk.push(tmp);
			}
		}
		cout << stk.top() << endl;
	}
	return 0;
}
