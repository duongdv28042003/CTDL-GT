#include <bits/stdc++.h>
using namespace std;

double length(int a1, int b1, int a2, int b2)
{
    double res = 0;
    res = sqrt(pow((a2-a1),2) +  pow((b2-b1),2));
    return res;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n+1][3];
        for (int i=1; i<=n; i++) cin >> a[i][1] >> a[i][2] ;
        double min = length(a[1][1], a[1][2], a[2][1], a[1][2]);
        for (int i=1; i<n; i++)
        {
            for (int j = i+1; j<=n; j++)
            {
                if (length(a[i][1], a[i][2], a[j][1], a[j][2]) < min)
                    min = length(a[i][1], a[i][2], a[j][1], a[j][2]);
            }
        }
        cout << fixed << setprecision(6) << min << endl;
    }
    return 0;
}