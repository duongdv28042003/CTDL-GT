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
		for (int i = n-1; i >= 0; i--)
		{
			if (isalpha(s[i])) stk.push(string(1,s[i]));
			else
			{
				string s1 = stk.top(); stk.pop();
				string s2 = stk.top(); stk.pop();
				string tmp = s1+s2+s[i];
				stk.push(tmp);
			}
		}
		cout << stk.top() << endl;
	}
	return 0;
}
