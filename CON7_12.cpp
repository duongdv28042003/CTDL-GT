#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		stack <string> res;
		for (int i=s.length() - 1; i >= 0; i--)
		{
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string fi = res.top(); res.pop();
				string se = res.top(); res.pop();
				string tmp = '(' + fi + s[i] + se + ')';
				res.push(tmp);
			}
			else 
			{
				res.push(string(1, s[i]));
			}
		}
		cout << res.top() << endl;
	}	
	return 0;
}

