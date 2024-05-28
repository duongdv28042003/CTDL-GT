#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		stack <string> stk;
		int n = s.length();
		for (int i = n - 1; i >= 0; i--)
		{
			if (isalpha(s[i])) stk.push(string(1,s[i]));
			else 
			{
				string a = stk.top(); stk.pop();
				string b = stk.top(); stk.pop();
				string tmp = '(' + a + s[i] + b + ')';
				stk.push(tmp);
			}
		}
		cout << stk.top() << endl;
	}
	return 0;
}

