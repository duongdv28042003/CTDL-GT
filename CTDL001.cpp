#include <bits/stdc++.h>
using namespace std;

void chuyenthanh0( int a[], int n, int vt)
{
    for (int i=vt; i<n; i++) a[i] = 0;
}

void sinhChuoiNhiPhan(int a[], int n)
{
    chuyenthanh0(a,n,0);
    for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
    if (n==1) cout << 1 << endl;
    int i=n-1;
    while ( i > 0)
    {
        if (a[i] == 1) i--;
        if (a[i] == 0)
        {
            a[i] = 1;
            chuyenthanh0(a,n,i+1);
            for (int d=0; d<n; d++) cout << a[d] << " ";
            cout << endl;
            i=n-1;
        }
        
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        sinhChuoiNhiPhan(a, n);
    }
    return 0;
}
