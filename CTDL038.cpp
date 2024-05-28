#include <bits/stdc++.h>
using namespace std;
int doiso(int a, int x, int y)
{
    int k=1, s=0, d;
    while (a>0)
    {
        d = a % 10;
        if (d == x)  d = y; 
        s = k * d + s;
        a/=10;
        k *= 10;
    }
    return s;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a,b; cin >> a >> b;
        cout << doiso(a,5,3) + doiso(b, 5, 3) << " " << doiso(a,3,5) + doiso(b, 3, 5);
        cout << endl;
    }
}