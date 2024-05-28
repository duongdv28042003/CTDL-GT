#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int mod7 = n / 7;
		while ((n - mod7 * 7) %4 != 0) mod7--;
		if (mod7 < 0) cout << "-1";
		else
		{
			for (int i=1; i<=(n - mod7 * 7)/4; i++) cout << '4';
			for (int i=1; i<=mod7; i++) cout << '7';
		}
		cout << endl;
	}
	return 0;
}
