#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
	stack <int> stk;
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i])) stk.push(s[i] - '0');
		else 
		{
			int s1 = stk.top(); stk.pop();
			int s2 = stk.top(); stk.pop();
			int tmp;
			if (s[i] == '+') tmp = s1 + s2; 
			if (s[i] == '-') tmp = s2 - s1;
			if (s[i] == '*') tmp = s1 * s2;
			if (s[i] == '/') tmp = s2 / s1;
			stk.push(tmp);
		}
	}
	cout << stk.top() << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
