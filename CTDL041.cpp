#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int v, e; cin >> v >> e;
		int a[e+1][3];
		for (int i=1; i<=e; i++) cin >> a[i][1] >> a[i][2];
		for (int i=1; i<=v; i++)
		{
			cout << "D" << i << ": ";
			for (int j = 1; j <= e; j++)
			{
				if (a[j][2] == i) cout << a[j][1] << " ";
				if (a[j][1] == i) cout << a[j][2] ;
			}
			cout << endl;
		}
	}
	return 0;
}
